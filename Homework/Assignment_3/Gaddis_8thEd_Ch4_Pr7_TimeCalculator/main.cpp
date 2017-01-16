/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 3, 2017, 12:15 PM
  Purpose:  Template to be used in all programming
            projects!
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
    int numSecs,        //Number of seconds input
        numMins,        //Number of minutes
        numHrs,         //Number of hours
        numDays;        //Number of days
            
    //Input values
    cout<<"This program will calculate the number of minutes, hours, and days for"<<endl;
    cout<<"an input number of seconds.  Please enter required information when prompted."<<endl;
    cout<<"Please enter the number of seconds in whole numbers: ";
    cin>>numSecs;
    
    //Process by mapping inputs to outputs
    if (numSecs<60){
        cout<<"Please enter a number over 60.";
    }
    else if (numSecs>=60 && numSecs<3600){
        numMins=numSecs/60;
        cout<<"There are "<<numMins<<" minute(s) in "<<numSecs<<" seconds.";
    }
    else if (numSecs>=3600 && numSecs<86400){
        numHrs=numSecs/3600;
        cout<<"There are "<<numHrs<<" hours in "<<numSecs<<" seconds.";
    }
    else if (numSecs>=86400){
        numDays=numSecs/86400;
        cout<<"There are "<<numDays<<" days in "<<numSecs<<" seconds.";
    }
    //Output values

    //Exit stage right!
    return 0;
}