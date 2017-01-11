/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 10, 2017, 6:20 PM
  Purpose:  Compounding interest calculator.
 */

//System Libraries
#include <iostream>
#include <iomanip>      //For setprecision
#include <cmath>        //For power function
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const float PERCENT=100;        //Constant for percent conversion
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float princip,      //Principal invested
          rate,         //Interest rate in percent
          intErnd,      //Interest earned
          total;        //Principal plus interest
    int compFrq;        //Compound frequency
            
    //Input values
    cout<<"This program will calculate the interest on an amount invested after 1 year and a specified"<<endl;
    cout<<"interest rate and compounding schedule.  Please enter all required information when prompted."<<endl;
    cout<<"Please enter the amount invested: $";
    cin>>princip;
    cout<<"Please enter the interest rate in percent: ";
    cin>>rate;
    cout<<"Please enter the number of times interest is compounded (e.g.: if monthly, enter '12'): ";
    cin>>compFrq;
    
    //Process by mapping inputs to outputs
    total=princip*pow((1+((rate/PERCENT)/compFrq)),compFrq);
    intErnd=total-princip;
    
    //Output values
    cout<<""<<endl;
    cout<<"Account Values After One Year:"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"Interest rate    :"<<right<<setw(12)<<fixed<<setprecision(2)<<rate<<"%"<<endl;
    cout<<"Times compounded :"<<right<<setw(12)<<compFrq<<endl;
    cout<<"Principal        : $"<<right<<setw(10)<<fixed<<setprecision(2)<<princip<<endl;
    cout<<"Interest         : $"<<right<<setw(10)<<fixed<<setprecision(2)<<intErnd<<endl;
    cout<<"Total            : $"<<right<<setw(10)<<fixed<<setprecision(2)<<total<<endl;
    //Exit stage right!
    return 0;
}
