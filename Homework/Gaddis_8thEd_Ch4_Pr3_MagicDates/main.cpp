/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 12, 2017, 1:20 PM
  Purpose:  Magic dates program
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
    unsigned int month,         //2-digit month
                 day,           //2-digit day
                 year;          //2-digit year
    
    //Input values
    cout<<"This program will determine if a date entered is a 'Magic Date'."<<endl;
    cout<<"Please enter all required information when prompted."<<endl;
    cout<<"Please enter a 2-digit month (1-12): ";
    cin>>month;
    cout<<"Please enter a 2-digit day (1-31): ";
    cin>>day;
    cout<<"Please enter a 2-digit year: ";
    cin>>year;
    
    //Process by mapping inputs to outputs
    if ((month*day)==year)
        cout<<"Congratulations! This is a MAGIC DATE!";
    else
        cout<<"Sorry, this is not a magic date.  Please try again.";
    //Output values

    //Exit stage right!
    return 0;
}