/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 10, 2017, 9:50 PM
  Purpose:  Property tax calculator program
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
const int PERCENT=100;      //Constant integer for percent conversion
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float assPerc=60,     //Assessment percentage
          taxCalc=100;    //Assessment divisor       
    long propVal;         //Property value
    float totTax,         //Total property tax
          taxRate=0.75,   //Tax rate 0.75/100
          assValu;        //Assessment value
    
    //Input values
    cout<<"This program will calculate property tax value for a given property"<<endl;
    cout<<"based on the property value input.  Please enter property value when"<<endl;
    cout<<"prompted."<<endl;
    cout<<"Please enter the total property value in whole dollars: ";
    cin>>propVal;
    
    //Process by mapping inputs to outputs
    assValu=propVal*(assPerc/PERCENT);  //Obtaining assessment value
    totTax=(assValu/taxCalc)*taxRate;   //Obtaining total tax assessment
    
    //Output values
    cout<<"The total property tax assessment for a property valued at $"<<propVal<<" is: $"
            <<static_cast<int>(totTax)<<endl;
    //Exit stage right!
    return 0;
}
