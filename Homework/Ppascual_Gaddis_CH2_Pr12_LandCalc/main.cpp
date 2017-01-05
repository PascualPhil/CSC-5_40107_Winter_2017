/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 4, 2017, 5:30 PM
  Purpose:  Land Calculator Program
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const int ACRTOFT=43560; //Acres to Square Feet Conversion
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int numAcre,numSqFt; //Number of Acres; Number of Square Feet
    
    //Input values
    cout<<"This Program is designed to convert"<<endl;
    cout<<"an input number of Acres to equivalent"<<endl;
    cout<<"number of Square Feet."<<endl;
    //Explanation of Program
    
    cout<<"Enter number of Acres: "<<endl;
    cin>>numAcre;
    //Input of number of Acres to be converted
    
    //Process by mapping inputs to outputs
    numSqFt=numAcre*ACRTOFT; //Square Feet=Number of Acres * Acre to Sq Ft Conv
    //Output values
    cout<<"Equivalent Square Footage = "<<numSqFt<<endl;
    //Exit stage right!
    return 0;
}