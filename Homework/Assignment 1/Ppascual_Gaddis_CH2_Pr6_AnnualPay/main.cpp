/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 5, 2017, 8:45 PM
  Purpose:  Annual Pay calculator
 */

//System Libraries
#include <iostream>
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
    int payAmt=2.2e3;  //Amount of pay per pay period
    int payPrds=26;   //Number of pay periods per year
    int annPay;        //Total pay for one year
    
    //Input values
    
    //Process by mapping inputs to outputs
    annPay=payAmt*payPrds;  //Amount per pay period times # of pay periods
    
    //Output values
    cout<<"This program will calculate an individuals annual pay based"<<endl;
    cout<<"on the amount of their pay per pay period and the number of"<<endl;
    cout<<"pay periods in a year."<<endl;
    cout<<"Amount of pay per pay period:      $"<<static_cast<int>(payAmt)<<" per pay period"<<endl;
    cout<<"Number of pay periods:             "<<static_cast<int>(payPrds)<<endl;
    cout<<"Annual pay:                        $"<<annPay<<" per year"<<endl;
    //Exit stage right!
    return 0;
}
