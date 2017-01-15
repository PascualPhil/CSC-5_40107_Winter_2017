/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 14, 2017, 8:05 PM
  Purpose:  Mass and Weight
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
    float weight;       //Weight
    int   mass;         //Mass in newtons
    
    //Input values
    cout<<"This program will calculate the weight of an object based on its mass"<<endl;
    cout<<" in kilograms.  Please enter required information when prompted."<<endl;
    cout<<endl;
    cout<<"Please enter the object's mass in kilograms: ";
    cin>>mass;
    
    //Process by mapping inputs to outputs
    if (mass<=1000 && mass>=10){
        weight=mass*9.8;
        cout<<"This object has a weight of "<<weight<<" newtons."<<endl;
    }
    else if (mass>1000){
        cout<<"This object's mass is too high. Please run program again with a lower mass.";
    }
    else if (mass<10){
        cout<<"This object's mass is too low.  Please run program again with a higher mass.";
    }
    //Output values
    
    //Exit stage right!
    return 0;
}