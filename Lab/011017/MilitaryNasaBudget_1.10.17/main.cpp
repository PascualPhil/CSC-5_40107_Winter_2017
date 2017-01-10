/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 10, 2017, 12:15 PM
  Purpose:  Military and NASA debt percentage calculator.
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
const float PERCENT=100;      //Constant integer for percent conversion
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float fedBudg=3.854e12,     //Total federal budget
          milBudg=598.5e9,      //Total military budget
          nasBudg=18.5e9;       //Total NASA budget
    float milPerc,              //Percentage military budget
          nasPerc;              //Percentage NASA budget
    //Input values
    
    //Process by mapping inputs to outputs
    milPerc=(milBudg/fedBudg)*PERCENT;
    nasPerc=(nasBudg/fedBudg)*PERCENT;
    //Output values
    cout<<"According to www.nationalpriorities.org, the 2016 US military budget"<<endl;
    cout<<"totalled $598.5 billion.  According to www.nasa.gov, the 2016 NASA budget"<<endl;
    cout<<"totalled $18.5 billion.  The total US budget totals $3.854 trillion."<<endl;
    cout<<"According to those totals, the military accounts for "<<fixed<<setprecision(2)<<milPerc
            <<"% of the total US federal budget."<<endl;
    cout<<"According to those totals, NASA accounts for "<<fixed<<setprecision(2)<<nasPerc
            <<"% of the total US federal budget."<<endl;
    //Exit stage right!
    return 0;
}
