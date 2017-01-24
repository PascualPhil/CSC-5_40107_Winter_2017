/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 24, 2017, 12:43 PM
  Purpose: Biased Coin - 2 Throws at a Time
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
    unsigned int nTT=0,nTH=0,nHT=0,nHH=0,nCoins;
    
    //Input values
    cout<<"This is a coin-flipping problem."<<endl;
    cout<<"Please input the probability of throwing Tails: ";
    cin>>pTails;
    cout<<"Please input the number of coin flips: ";
    cin>>nCoins;
    
    //Process by mapping inputs to outputs
    pHeads=1-pTails;
    for(unsigned int flip=1;flip<=nCoins;flip++){
        float prob1=rand()/static_cast<float>(MAXRND);
        float prob2=rand()/static_cast<float>(MAXRND);
        if(prob1<=pTails && prob2<=pTails)nTT++;
        else if (prob1<=pTails && prob2>pTails)nTH++;
        else if (prob1>pTails && prob2>pTails)nHH++;
        else nHT++;
    }
    //Output values
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"Percentage input for probability of Tails: "<<pTails<<endl;
    cout<<"Percentage input for probability of Heads: "<<pHeads<<endl;
    cout<<endl;
    cout<<"Percentage output for probability of 2 Tails: "
            <<static_cast<float>(nTT)/nCoins<<endl;
    cout<<"Percentage output for probability of 1 Tail, 1 Head:"
            <<static_cast<float>(nTH)/nCoins<<endl;
    cout<<"Percentage output for probability of 1 Head, 1 Tail:"
            <<static_cast<float>(nHT)/nCoins<<endl;
    cout<<"Percentage output for probability of 2 Heads:"
            <<static_cast<float>(nHH)/nCoins<<endl;
    //Exit stage right!
    return 0;
}