/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 11, 2017, 1:45 PM
  Purpose:  Angle Calculator
 */

//System Libraries
#include <iostream>
#include <iomanip>      //For setprecision
#include <cmath>        //For sin cos tan functions
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
    int radians;        //Angle in radians
    float sine,          //Sin function output
          cosine,          //Cos function output
          tangent;          //Tan function output
    
    //Input values
    cout<<"This program will display the values of sine, cosine, and tangent"<<endl;
    cout<<"based on an angle input.  Please enter the required information when prompted."<<endl;
    cout<<"Please enter the angle in radians: ";
    cin>>radians;
    
    //Process by mapping inputs to outputs
    sine=sin(radians);
    cosine=cos(radians);
    tangent=tan(radians);
    
    //Output values
    cout<<"Based on the angle entered, here are the sine, cosine, and tangent values."<<endl;
    cout<<"Sine:    "<<fixed<<setprecision(4)<<sine<<endl;
    cout<<"Cosine:  "<<fixed<<setprecision(4)<<cosine<<endl;
    cout<<"Tangent: "<<fixed<<setprecision(4)<<tangent<<endl;
    //Exit stage right!
    return 0;
}