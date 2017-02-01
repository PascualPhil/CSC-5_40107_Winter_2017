/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on February 1, 2017, 12:30 PM
  Purpose:  Coin toss simulator
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
void coinTos(int);//Prototype for coin toss simulator

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set RNG seed
    srand(static_cast<int>(time(0)));
    //Declare Variables
    int times;//Number of times coin to be tossed
    
    //Input values
    cout<<"This program will simulate a coin toss for a user-defined number"<<endl;
    cout<<"of throws.  Please enter required information when prompted."<<endl;
    cout<<endl;
    cout<<"Please enter number of throws to be simulated: ";
    cin>>times;
    
    //Process by mapping inputs to outputs
    coinTos(times);
    
    //Output values

    //Exit stage right!
    return 0;
}

//******************************************************************************
//                              Coin Toss Simulator
//Description: Will simulate a coin toss up to the user-defined number of
//             throws
//Input: Number of times to toss coin
//Output: Result of coin toss (heads or tails)
//******************************************************************************
void coinTos(int times){
    int toss;
    cout<<"Throw      Result"<<endl;
    for (int t=1;t<=times;t++){
        toss=rand()%2+1;//Generates random number between 1-2
        if(toss==1){
            cout<<setw(3)<<t<<"         Heads"<<endl;
        }
        else cout<<setw(3)<<t<<"         Tails"<<endl;
    }
}
