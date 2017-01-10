/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 10, 2017, 11:23 AM
  Purpose:  Template to be used in all programming
            projects!
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
const int PERCENT=100;      //Constant integer for percentage conversion
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    long deb2016=19.4e12,       //Debt in 2016
         deb2008=10.6e12,       //Debt in 2008
         pop2016=320e6,         //US population 2016
         pop2008=304e6;         //US population 2008
    long per2016,               //Percentage of debt to population 2016
         per2008;               //Percentage of debt to population 2008
    //Input values
    
    //Process by mapping inputs to outputs
    per2016=deb2016/pop2016;
    per2008=deb2008/pop2008;
    //Output values
    cout<<"According to http://www.polidiotic.com/, the total US federal debt as of"<<endl;
    cout<<"the end of Fiscal Year 2016 is $19.4 trillion.  The US federal debt as of"<<endl;
    cout<<"the end of Fiscal Year 2008 was $10 trillion."<<endl;
    cout<<"Based on those figures, the ratio of 2008 debt to population was $"<<per2008<<" per person."<<endl;
    cout<<"The ratio of 2016 debt to population was $"<<per2016<<" per person."<<endl;
    //Exit stage right!
    return 0;
}
