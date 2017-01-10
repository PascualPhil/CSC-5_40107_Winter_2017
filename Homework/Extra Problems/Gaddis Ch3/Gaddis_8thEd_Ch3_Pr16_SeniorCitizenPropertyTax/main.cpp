/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 10, 2017, 12:35 PM
  Purpose:  Senior Citizen Property Tax Calculator
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
const float PERCENT=100;      //Constant integer for percent conversion   
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float decValu,      //Declared value
          assValu,      //Assessed value
          taxRate,      //Tax rate per $100
          annuTax,      //Annual tax assessment
          quarTax;      //Quarterly payment
    //Input values
    cout<<"This program will determine the tax assessment of a senior citizen's home,"<<endl;
    cout<<"taking into account the $5000 homeowner exemption afforded to senior citizens."<<endl;
    cout<<"Please enter the requested information when prompted."<<endl;
    cout<<"What is the value of the property in whole dollars? $";
    cin>>decValu;
    cout<<"What is the tax rate per $100 of assessed value? $";
    cin>>taxRate;
    //Process by mapping inputs to outputs
    assValu=(decValu*(60/PERCENT))-5000;   //Assessed value minus exemption
    annuTax=(assValu/100)*taxRate;
    quarTax=annuTax/4;
    //Output values
    cout<<"Based on a property value of $"<<decValu<<", the annual tax for the property "
            "would be $"<<fixed<<setprecision(2)<<annuTax<<"."<<endl;
    cout<<"The quarterly payments for the year's property taxes would be $"<<fixed<<
            setprecision(2)<<quarTax<<"."<<endl;
    //Exit stage right!
    return 0;
}
