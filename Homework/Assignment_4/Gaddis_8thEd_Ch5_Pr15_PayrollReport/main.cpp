/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 19, 2017, 1:45 PM
  Purpose:  Payroll report generator
 */

//System Libraries
#include <iostream>
#include <iomanip>
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
    unsigned int empNum=1;        //Employee number
    float        grossPay=0,      //Gross pay
                 stateTax=0,      //State tax
                 fedrlTax=0,      //Federal tax
                 ficaTax=0,       //FICA tax
                 netPay;          //Net pay
    
    //Input values
    cout<<"This program will generate a payroll report displaying totals for gross"<<endl;
    cout<<"pay, and state, federal, and FICA taxes.  Please enter required information"<<endl;
    cout<<"when prompted."<<endl;
    cout<<endl;

    //Loops to obtain and accumulate information
    while(empNum!=0){
        cout<<"****Please enter employee number, enter a 0 if done: ";
        cin>>empNum;
        if(empNum!=0){
            float empGross=0,
              empState=0,
              empFedrl=0,
              empFica=0;
        cout<<"Enter the gross pay for Employee "<<empNum<<": $";
        cin>>empGross;
        cout<<"Enter the Federal Tax Withholding for Employee "<<empNum<<": $";
        cin>>empFedrl;
        cout<<"Enter the State Tax Withholding for Employee "<<empNum<<": $";
        cin>>empState;
        cout<<"Enter the FICA Withholding for Employee "<<empNum<<": $";
        cin>>empFica;
        grossPay+=empGross;
        fedrlTax+=empFedrl;
        stateTax+=empState;
        ficaTax+=empFica;
        netPay=grossPay-(fedrlTax+stateTax+ficaTax);
        cout<<endl;
        }
    }
    cout<<endl;
    //Output values
    cout<<"Payroll Report:"<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"Total Gross Pay:           $"<<setw(10)<<right<<fixed<<setprecision(2)<<grossPay<<endl;
    cout<<"Total Federal Withholding: $"<<setw(10)<<right<<fixed<<setprecision(2)<<fedrlTax<<endl;
    cout<<"Total State Withholding:   $"<<setw(10)<<right<<fixed<<setprecision(2)<<stateTax<<endl;
    cout<<"Total FICA Withholding:    $"<<setw(10)<<right<<fixed<<setprecision(2)<<ficaTax<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"Total Net Pay:             $"<<setw(10)<<right<<fixed<<setprecision(2)<<static_cast<float>(netPay)<<endl;
    //Exit stage right!
    return 0;
}