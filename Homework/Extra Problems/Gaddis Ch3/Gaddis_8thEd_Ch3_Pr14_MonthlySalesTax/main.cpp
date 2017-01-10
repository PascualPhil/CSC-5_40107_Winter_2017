/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 9, 2017, 9:40 PM
  Purpose:  Tax calculation program.
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
const int PERCENT=100;      //Constant integer for percent conversion
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float totSale,          //Total Collected
        prdSale,          //Product Sales
        saleTax;          //Sales Taxes Collected
    float counPer=2,        //County Tax Percentage
          statPer=4,        //State Tax Percentage
          counTax,          //County Tax Collected
          statTax;          //State Tax Collected
    string month;             //Month
            
    //Input values
    cout<<"This program will calculate State and County sales tax collections"<<endl;
    cout<<"based on the total amount of payments collected from customers.  Please"<<endl;
    cout<<"enter the required information when prompted."<<endl;
    cout<<"Report Month: ";
    getline(cin, month);
    cout<<"Please enter the total amount collected from customers: ";
    cin>>totSale;
    
    //Process by mapping inputs to outputs
    prdSale=totSale/1.06;
    saleTax=totSale-prdSale;
    counTax=prdSale*(counPer/PERCENT);
    statTax=prdSale*(statPer/PERCENT);
    
    //Output values
    cout<<"Total Collected from Customers:      $"<<fixed<<setprecision(2)<<totSale<<endl;
    cout<<"Product Sales:                       $"<<fixed<<setprecision(2)<<prdSale<<endl;
    cout<<"Sales Taxes Collected:               $"<<fixed<<setprecision(2)<<saleTax<<endl;
    cout<<"State Sales Taxes:                   $"<<fixed<<setprecision(2)<<statTax<<endl;
    cout<<"County Sales Taxes:                  $"<<fixed<<setprecision(2)<<counTax<<endl;
    //Exit stage right!
    return 0;
}
