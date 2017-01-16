/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 12, 2017, 1:35 PM
  Purpose:  Area of Rectangles
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
unsigned int length1,            //Length rectangle 1
             length2,            //Length rectangle 2
             width1,             //Width rectangle 1
             width2,             //Width rectangle 2
             area1,              //Area rectangle 1
             area2;              //Area rectangle 2
    
    //Input values
    cout<<"This program will compare the area of two rectangles based on the length"<<endl;
    cout<<"and width entered for each.  Please enter required information when prompted"<<endl;
    cout<<"Please enter length for rectangle 1 in whole numbers: ";
    cin>>length1;
    cout<<"Please enter width for rectangle 1 in whole numbers: ";
    cin>>width1;
    cout<<"Please enter length for rectangle 2 in whole numbers: ";
    cin>>length2;
    cout<<"Please enter width for rectangle 2 in whole numbers: ";
    cin>>width2;
    
    //Process by mapping inputs to outputs
    area1=length1*width1;       //Rectangle 1 area
    area2=length2*width2;       //Rectangle 2 area
    
    //Output values
    if(area1==area2)
        cout<<"The area for both rectangles is the same.";
    else if(area1>area2)
        cout<<"Rectangle 1 has a larger area than Rectangle 2.";
    else
        cout<<"Rectangle 2 has a larger area than Rectangle 1.";
    
    //Exit stage right!
    return 0;
}