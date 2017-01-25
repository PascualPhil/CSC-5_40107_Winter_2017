/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 24, 2017, 12:23 PM
  Purpose: Biased Coin
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const unsigned int MAXRND=pow(2,31)-1;      //Maximum random number
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set RNG seed
    srand(static_cast<int>(time(0)));
    
    //Declare Variables
    float pTails,pHeads;
    unsigned int nTails=0,nHeads=0,nCoins;
    
    //Input values
    cout<<"This is a coin-flipping problem."<<endl;
    cout<<"Please input the probability of throwing Tails: ";
    cin>>pTails;
    cout<<"Please input the number of coin flips: ";
    cin>>nCoins;
    
    //Process by mapping inputs to outputs
    pHeads=1-pTails;
    for(unsigned int flip=1;flip<=nCoins;flip++){
        float prob=rand()/static_cast<float>(MAXRND);
        if(prob<pTails)nTails++;
        else nHeads++;
    }
    //Output values
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"Percentage input for probability of Tails: "<<pTails<<endl;
    cout<<"Percentage input for probability of Heads: "<<pHeads<<endl;
    cout<<"Percentage output for probability of Tails: "
            <<static_cast<float>(nTails)/nCoins<<endl;
    cout<<"Percentage output for probability of Heads:"
            <<static_cast<float>(nHeads)/nCoins<<endl;
    
    //Exit stage right!
    return 0;
}