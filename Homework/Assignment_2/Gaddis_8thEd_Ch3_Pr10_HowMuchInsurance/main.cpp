/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 9, 2017, 5:20 PM
  Purpose:  Minimum insurance calculator.
 */

//System Libraries
#include <iostream>
#include <iomanip>  //For setprecision
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const int PERCENT=100;       //Constant integer for percent conversion
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float minPerc=80.0,       //Minimum insurance percentage
            repCost,        //Building replacement cost
            minIns;         //Minimum insurance amount
    //Input values
    cout<<"This program will determine the minimum amount of insurance for a"<<endl;
    cout<<"home or structure.  Please enter the replacement cost of a home or"<<endl;
    cout<<"structure when prompted."<<endl;
    cout<<"Replacement cost for home or structure: $";
    cin>>repCost;
    
    //Process by mapping inputs to outputs
    minIns=repCost*(minPerc/PERCENT);
    
    //Output values
    cout<<"The minimum insurance coverage for a home or building with a replacement"<<endl;
    cout<<"cost of $"<<fixed<<setprecision(2)<<repCost<<" is $"<<fixed<<setprecision(2)<<minIns<<endl;
    //Exit stage right!
    return 0;
}
