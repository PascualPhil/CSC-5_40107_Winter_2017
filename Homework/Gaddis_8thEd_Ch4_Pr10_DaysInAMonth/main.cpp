/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 15, 2017, 8:45 AM
  Purpose:  Days In A Month
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
    int month,      //Numeric month
        year;       //Numeric year
    
    //Input values
    cout<<"This program will determine the number of days in an input month and year."<<endl;
    cout<<"Please enter the required information when prompted."<<endl;
    cout<<endl;
    cout<<"Please enter the two-digit month (1-12): ";
    cin>>month;
    cout<<"Please enter the four-digit year: ";
    cin>>year;
    
    //Process by mapping inputs to outputs
    if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10
            || month==12){
        cout<<"There are 31 days in that month.";
    }
    else if (month==4 || month==6 || month==9 || month==11){
        cout<<"There are 30 days in that month.";
    }
    else if (year%4==0){
        if (year%100==0){
            if (year%400==0)
                cout<<"There are 29 days in this month.";
            else
                cout<<"There are 28 days in this month.";
        }
        else
            cout<<"There are 29 days in this month.";
    }
    else 
            cout<<"There are 28 days in that month.";
    

    //Output values

    //Exit stage right!
    return 0;
}