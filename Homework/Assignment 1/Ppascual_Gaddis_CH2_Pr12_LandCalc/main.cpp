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
    int numFeet=391876; //Number of square feet to be converted
    int numAcre; //Number of Acres
    //Input values
    
    //Explanation of Program
    cout<<"This program will indicate the number of acres that"<<endl;
    cout<<"are present in 391,876 square feet."<<endl;
    //Input of number of Acres to be converted
    
    //Process by mapping inputs to outputs
    numAcre=numFeet/ACRTOFT; //Number of square feet divided by Acres to Feet constant
    
    //Output values
    cout<<"Number of Square Feet: "<<static_cast<int>(numFeet)<<" ft^2."<<endl;
    cout<<"Number of Acres:       "<<numAcre<<endl;
    //Exit stage right!
    return 0;
}