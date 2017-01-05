/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 4, 2017, 5:02 PM
  Purpose:  Stock commission calculator
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const char PERCENT=100; //Constant percentage conversion
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char stkPric=35; //Price per Share in dollars
    short nShares=750; //Number of Shares
    char commish=2; //Commission in percent
    short stkPaid,comPaid,totPaid; //Total paid for stock
                                   //Total paid in commission
                                   //Total paid
    
    //Input values
    
    //Process by mapping inputs to outputs
    stkPaid=stkPric*nShares; //Stock Price * # of Shares
    comPaid=stkPaid*commish/PERCENT; //Stock Price * Commission
    totPaid=stkPaid+comPaid; //Stock Paid + Commission Paid
    
    //Output values
    cout<<"Stock Price:       $"<<static_cast<int>(stkPric)<<"/share"<<endl;
    cout<<"Number of Shares:  "<<nShares<<" shares"<<endl;
    cout<<"Commission:        "<<static_cast<int>(commish)<<"%"<<endl;
    cout<<"Stock Price Paid = $"<<stkPaid<<endl;
    cout<<"Commission Paid  = $"<<comPaid<<endl;
    cout<<"Total Paid       = $"<<totPaid<<endl;
    //Exit stage right!
    return 0;
}