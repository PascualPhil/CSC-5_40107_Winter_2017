/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 17, 2017, 1:31 PM
  Purpose:  Sum of Numbers Problem
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
    int total,          //Total sum
        endNum;         //User-defined end of number series
    
    //Input values
    cout<<"This program will calculate the sum of a series of numbers from 1 to a "
            "user defined ending number."<<endl;
    cout<<"Please enter a number greater than zero: ";
    cin>>endNum;
    
    //While loop for input validation
    while (endNum<=0){
    cout<<"Please enter a number greater than zero: ";
    cin>>endNum;
    }
    
    //Loop that adds series
    for (int count=1; count<=endNum; count++)
        total+=count;    //Accumulate running total from 1 through end of number series
        cout<<"The sum of the series 1 through "<<endNum<<" is "<<total<<".";
    //Output values
    
    //Exit stage right!
    return 0;
}