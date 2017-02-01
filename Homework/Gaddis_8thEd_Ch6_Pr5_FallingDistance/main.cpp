/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on February 1, 2017, 12:15 PM
  Purpose:  Falling distance calculator
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
void fallDist(int);//Function to calculate falling distance

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int t=10;//Time in seconds
    
    //Input values
    cout<<"This program will calculate the distance an object has fallen"<<endl;
    cout<<"based on how long the object has fallen for in seconds.  This"<<endl;
    cout<<"program will display how far an object has fallen in meters"<<endl;
    cout<<"for up to 10 seconds."<<endl;
    cout<<endl;
    
    //Process by mapping inputs to outputs
    fallDist(t);
    
    //Output values

    //Exit stage right!
    return 0;
}

//******************************************************************************
//                         Fall Distance Calculator
//Description: Calculates distance fallen based on time falling in seconds
//Input: Time in seconds
//Output: Distance fallen in meters
//******************************************************************************
void fallDist(int t){
    cout<<"Seconds   Distance"<<endl;
    for(int time=1;time<=t;time++){
        float d,g=9.8f;
        d=(.5)*g*(time*time);
        cout<<setw(2)<<time<<"sec       "<<setw(5)<<fixed<<setprecision(1)<<d<<
                "m"<<endl;
    }
}