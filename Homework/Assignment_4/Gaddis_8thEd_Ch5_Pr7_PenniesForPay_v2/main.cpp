/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 18, 2017, 12:50 PM
  Purpose:  Pennies for Pay
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

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int days,               //Days to be calculated
        pennies,            //Number of pennies
        total=0;            //Total pay in period
    
    //Input values
    cout<<"This program will calculate how much a person would earn over a period of time"<<endl;
    cout<<"if his/her salary starts at one penny and doubles each day the person works.  Please"<<endl;
    cout<<"enter required information when prompted."<<endl;
    cout<<endl;
    cout<<"Please enter the number of days worked: ";
    cin>>days;
    
    //Output for table headers
    cout<<"Days:"<<"         Salary:"<<endl;
    cout<<"-----"<<"         -------"<<endl;
    
    //Loop to calculate salary and accumulate total
    for(int calcDay=1;calcDay<=days;calcDay++){
        pennies=pow(2,calcDay-1);
        total+=pennies;
        cout<<setw(5)<<right<<calcDay<<"     $"<<setw(10)<<right<<fixed<<setprecision(2)<<(pennies/100.0)<<endl;
    }
    
    //Output values
    cout<<endl;
    cout<<"Total pay: $"<<fixed<<setprecision(2)<<(total/100.0)<<endl;
    //Exit stage right!
    return 0;
}