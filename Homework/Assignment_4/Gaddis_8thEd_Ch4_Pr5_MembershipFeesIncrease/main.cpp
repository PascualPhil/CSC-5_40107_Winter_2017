/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 18, 2017, 12:25 PM
  Purpose:  Membership fee increase calculator
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
const int PERCENT=100;       //Constant integer for percentage conversion

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float rate=2500.00,          //Initial membership fee
          numYrs=6;           //Number of years to calculate
    float feeIncr=4;          //Membership fee increase
    //Output of initial headers and table information
    cout<<"This program will calculate the new membership fees for a country club"<<endl;
    cout<<"for the next six years, with an initial membership fee of $2500 at a rate of increase of 4% per year."<<endl;
    cout<<endl;
    cout<<"Years:     New rate:"<<endl;
    cout<<"------     ---------"<<endl;
    //Loop to calculate new membership fees and display data
    for (int yrs=1;yrs<=numYrs;yrs++){
        rate=rate+(rate*(feeIncr/PERCENT));
        cout<<setw(6)<<right<<yrs<<"     $"<<setw(8)<<right<<fixed<<setprecision(2)<<rate<<endl;
    }

    //Exit stage right!
    return 0;
}