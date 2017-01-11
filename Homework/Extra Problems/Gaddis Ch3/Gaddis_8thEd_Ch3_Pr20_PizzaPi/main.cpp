/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 11, 2017, 12:54 PM
  Purpose:  Pizza slice calculator
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const float PI=3.14159;      //Constant float defining pi

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int diametr;        //Diameter of pizza;      //Number of slices
    float areaPza,      //Area of pizza
          radius, //Radius of the pizza
          numSlcs;    //Number of slices
    
    //Input values
    cout<<"This program will calculate the number of slices a pizza should contain"<<endl;
    cout<<"based on the area of the pizza.  Please enter the required information when"<<endl;
    cout<<"prompted."<<endl;
    cout<<"Please enter the diameter of the pizza in inches: ";
    cin>>diametr;
    
    //Process by mapping inputs to outputs
    radius=diametr/2;
    areaPza=PI*(radius*radius);
    numSlcs=areaPza/14.125;           
            
    //Output values
    cout<<"Based on the diameter of the pizza, you should have "<<static_cast<int>(numSlcs)<<" slices of pizza."<<endl;
    //Exit stage right!
    return 0;
}