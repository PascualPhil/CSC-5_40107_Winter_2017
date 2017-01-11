/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 11, 2017, 12:15 PM
  Purpose:  Paycheck calculator
 */

//System Libraries
#include <iostream>
#include <iomanip>      //For setprecision
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
    unsigned int hours;         //Number of hours
    float rate,                 //Rate of pay
          paychek;              //Total paycheck
    
    //Input values
    cout<<"This program will calculate your paycheck based on the number of hours"<<endl;
    cout<<"worked and rate of pay.  Please enter the required information when"<<endl;
    cout<<"prompted."<<endl;
    cout<<"Please enter the whole number of hours worked: ";
    cin>>hours;
    cout<<"Please enter your rate of pay: $";
    cin>>rate;
    
    //Process by mapping inputs to outputs
    if(hours<40)
        paychek=hours*rate;
    else
        paychek=(40*rate)+((hours-40)*2*rate);
    
    //Output values
    cout<<"Hours worked:      "<<hours<<" hours"<<endl;
    cout<<"Rate:             $"<<fixed<<setprecision(2)<<rate<<endl;
    cout<<"Total Paycheck:   $"<<fixed<<setprecision(2)<<paychek<<endl;
    
    //Exit stage right!
    return 0;
}