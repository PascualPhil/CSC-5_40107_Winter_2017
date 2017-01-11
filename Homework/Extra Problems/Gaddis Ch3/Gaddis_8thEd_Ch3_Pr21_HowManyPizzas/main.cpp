/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 11, 2017, 1:30 PM
  Purpose:  Pizza party calculator
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
    int diametr,        //Diameter of pizza
        numPpl;         //Number of people
    float areaPza,      //Area of pizza
          radius,       //Radius of the pizza
          totArea,      //Total amount of pizza based on numPpl & 4 slices/person
          totPiza,      //Number of pizzas needed
          numSlcs;    //Number of slices
    
    //Input values
    cout<<"This program will calculate the number of pizzas needed for a party"<<endl;
    cout<<"based on the number of guests and an average of four slices of pizza"<<endl;
    cout<<"eaten per person.  Please enter the required information when prompted."<<endl;
    cout<<"Please enter the number of people attending: ";
    cin>>numPpl;
    cout<<"Please enter the diameter (in inches) of the pizzas you wish to order: ";
    cin>>diametr;
    
    //Process by mapping inputs to outputs
    numSlcs=numPpl*4;
    totArea=numSlcs*14.125;
    radius=diametr/2.0;
    areaPza=PI*(radius*radius);
    totPiza=(totArea/areaPza)+1;
            
    //Output values
    cout<<"Based on the number of people attending and the diameter pizzas you wish to order,"<<endl;
    cout<<"you will need to order "<<static_cast<int>(totPiza)<<" pizzas.";
    //Exit stage right!
    return 0;
}