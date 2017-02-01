/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on February 1, 2017, 12:45 PM
  Purpose:  Present deposit calculator
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const float PERCENT=100.0f;//Constant float for percent conversion

//Function Prototypes
void presVal(int,float,int);//Function prototype for present value function

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int futVal,nYears;//Future value and number of years
    float inRate;//Interest rate in percent
    
    //Input values
    cout<<"This program will determine the amount of funds needed to deposit"<<endl;
    cout<<"into an account if the user wanted to have a desired amount of funds"<<endl;
    cout<<"available after a number of years.  Please enter all required"<<endl;
    cout<<"information when prompted."<<endl;
    cout<<endl;
    cout<<"Please enter the amount you wish to end up with: $";
    cin>>futVal;
    cout<<"Please enter the number of years you wish to save the money: ";
    cin>>nYears;
    cout<<"Please enter the interest rate of the savings account: ";
    cin>>inRate;
    cout<<endl;
    //Process by mapping inputs to outputs
    presVal(futVal,inRate,nYears);
    
    //Output values

    //Exit stage right!
    return 0;
}

//******************************************************************************
//                          Future Value Calculator
//Description: Determines initial deposit based on final amount user wishes to
//             have, how long user wishes to save, and interest rate of account
//Input: Final value of account, number of years to save, account interest rate
//Output: Initial deposit required to achieve final value
//******************************************************************************
void presVal(int futVal,float inRate,int nYears){
    float pv;//Initial deposit required
    pv=futVal/pow(1+(inRate/PERCENT),nYears);
    cout<<"The initial deposit required to have $"<<futVal<<" after "<<nYears<<
            " years is: $"<<pv<<endl;
}