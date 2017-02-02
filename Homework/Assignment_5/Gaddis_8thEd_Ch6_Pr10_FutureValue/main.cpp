/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on February 3, 2017, 12:35 PM
  Purpose:  Savings account calculator
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const float PERCENT=100.0f;//Constant float for percent conversion

//Function Prototypes
void futVal(int,float,int);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float intRate;
    int  initVal,nMonths;
    
    //Input values
    cout<<"This program will calculate the future value of a savings account"<<endl;
    cout<<"based on the initial deposit, interest rate, and number of months"<<endl;
    cout<<"the account is left to accrue interest.  Please enter all required"<<endl;
    cout<<"information when required."<<endl;
    cout<<endl;
    cout<<"Please enter the initial deposit in whole dollars: $";
    cin>>initVal;
    cout<<"Please enter the interest rate in percent: ";
    cin>>intRate;
    cout<<"Please enter the number of months the deposit will accrue interest: ";
    cin>>nMonths;
    
    //Process by mapping inputs to outputs
    futVal(initVal,intRate,nMonths);
    
    //Output values

    //Exit stage right!
    return 0;
}

//******************************************************************************
//                          Future Value Calculator
//Description: Will calculate the final value of a deposit based on interest 
//             rate and number of months initial deposit left to accrue interest
//Input: Initial deposit, interest rate, number of months
//Output: Final value of deposit
//******************************************************************************
void futVal(int initVal,float intRate,int nMonths){
    float finVal;//Final value
    finVal=initVal*(pow(1+(intRate/PERCENT),nMonths));
    cout<<"The final value of the account after "<<nMonths<<" months is: $"<<
            fixed<<setprecision(2)<<finVal<<endl;
}