/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 9, 2017, 12:20 PM
  Purpose:  Minimum/Maximum
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
    int numOne,         //First number entered
        numTwo;         //Second number entered
    //Input values
    cout<<"This program will determine if one number is greater than or less than"<<endl;
    cout<<"another."<<endl;
    cout<<"Please enter the first number: ";
    cin>>numOne;
    cout<<"Please enter the second number: ";
    cin>>numTwo;
    
    //Process by mapping inputs to outputs
    if(numOne>numTwo)
        cout<<numOne<<" is greater than "<<numTwo<<endl;
    else
        cout<<numTwo<<" is greater than "<<numOne<<endl;
    //Output values

    //Exit stage right!
    return 0;
}