/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 9, 2017, 1:15 PM
  Purpose:  Average rainfall calculator.
 */

//System Libraries
#include <iostream>
#include <iomanip> //For setprecision
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    string mnthOne,     //Month 1
           mnthTwo,     //Month 2
           mnthThr;     //Month 3
    int rainOne,    //Rainfall month 1
        rainTwo,    //Rainfall month 2
        rainThr;    //Rainfall month 3
    float avg;      //Average rainfall months 1-3
    //Input values
    cout<<"This program will calculate rainfall over 3 months."<<endl;
    cout<<"Enter the name of Month 1: ";
    cin>>mnthOne;
    cout<<"Enter the rainfall amount in inches for "<<mnthOne<<": ";
    cin>>rainOne;
    cout<<"Enter the name of Month 2: ";
    cin>>mnthTwo;
    cout<<"Enter the rainfall amount in inches for "<<mnthTwo<<": ";
    cin>>rainTwo;
    cout<<"Enter the name of Month 3: ";
    cin>>mnthThr;
    cout<<"Enter the rainfall amount in inches for "<<mnthThr<<": ";
    cin>>rainThr;
    
    //Process by mapping inputs to outputs
    avg=(rainOne+rainTwo+rainThr)/(float)3;
    //Output values
    cout<<"The average rainfall amount for "<<mnthOne<<", "<<mnthTwo<<", and "<<mnthThr<<" is "<<fixed<<setprecision(2)<<avg<<" inches per month.";
    //Exit stage right!
    return 0;
}
