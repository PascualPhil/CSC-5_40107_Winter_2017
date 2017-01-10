
/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 9, 2017, 7:20 PM
  Purpose:  Celcius to Farenheit converter
 */

//System Libraries
#include <iostream>
#include <iomanip>  //For setprecision
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
    float celcius,          //Celcius in degrees
            farenht;        //Farenheit in degrees
    //Input values
    cout<<"This program will conver degrees in Celcius to degrees in Farenheit."<<endl;
    cout<<"Please enter Celcius in degrees: ";
    cin>>celcius;
    
    //Process by mapping inputs to outputs
    farenht=(9/5.0)*celcius+32;
    
    //Output values
    cout<<"The temperature in Farenheit at "<<celcius<<" degrees is: "<<fixed<<setprecision(2)<<farenht<<" degrees."<<endl;
    //Exit stage right!
    return 0;
}