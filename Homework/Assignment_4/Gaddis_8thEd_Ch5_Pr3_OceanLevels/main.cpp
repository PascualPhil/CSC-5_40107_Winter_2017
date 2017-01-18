/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 18, 2017, 12:10 PM
  Purpose:  Ocean levels calculator
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
    unsigned short numYrs=25;       //Number of years to be calculated
    float incrmnt=1.5;              //Increment of sea level rise per year
    float seaLvl;                   //Sea level rise
    
    //Initial heading output
    cout<<"This program will calculate the level of sea level rise over the next"<<endl;
    cout<<"25 years, if the sea level rises at a rate of 1.5mm per year."<<endl;
    cout<<endl;
    
    //Loop to calculate sea level rise and display table
    cout<<"Years:"<<"   Sea Level Rise:"<<endl;
    cout<<"------"<<"   ---------------"<<endl;
    for(int yrs=1;yrs<=numYrs;yrs++){
        seaLvl=yrs*incrmnt;
        cout<<right<<setw(6)<<yrs<<fixed<<setw(16)<<setprecision(2)<<seaLvl<<"mm"<<endl;
    }
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}