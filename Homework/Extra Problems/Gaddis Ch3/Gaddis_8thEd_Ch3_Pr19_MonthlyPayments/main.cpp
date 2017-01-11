/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 11, 2017, 12:30 PM
  Purpose:  Monthly payments calculator.
 */

//System Libraries
#include <iostream>
#include <iomanip>      //For setprecision
#include <cmath>        //For pow function
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const int PERCENT=100.0;        //Constant float for percentage conversion
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int paymnts;                //Number of payments
    float rate,                 //Interest rate
          loanAmt,              //Loan amount
          payAmnt,              //Payment amount
          totPaid,              //Total payment (payamnt*paymnts)
          intPaid;              //Interest paid (totPaid-loanAmt)
                
    //Input values
    cout<<"This program will calculate the monthly payments, total payment amount,"<<endl;
    cout<<"and interest paid for a user-specified loan amount, interest rate, and"<<endl;
    cout<<"number of payments.  Please enter the required information when prompted."<<endl;
    cout<<"Please enter the loan amount: $";
    cin>>loanAmt;
    cout<<"Please enter the interest rate: ";
    cin>>rate;
    
    cout<<"Please enter the number of payments in whole numbers: ";
    cin>>paymnts;
    
    //Process by mapping inputs to outputs
    payAmnt=(((rate/PERCENT)*pow(1+(rate/PERCENT),paymnts))/(pow(1+(rate/PERCENT),paymnts)-1))*loanAmt;
    totPaid=payAmnt*paymnts;
    intPaid=totPaid-loanAmt;
    
    //Output values
    cout<<"Payment Report:"<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"Loan Amount:          $"<<fixed<<setprecision(2)<<setw(15)<<right<<loanAmt<<endl;
    cout<<"Interest Rate:         "<<setw(15)<<right<<rate<<"%"<<endl;
    cout<<"Number of Payments:    "<<setw(15)<<right<<paymnts<<" payments"<<endl;
    cout<<"Monthly Payment:      $"<<fixed<<setprecision(2)<<setw(15)<<right<<payAmnt<<endl;
    cout<<"Amount Paid Back:     $"<<fixed<<setprecision(2)<<setw(15)<<right<<totPaid<<endl;
    cout<<"Total Interest Paid:  $"<<fixed<<setprecision(2)<<setw(15)<<right<<intPaid<<endl;
    //Exit stage right!
    return 0;
}