/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 15, 2017, 8:30 AM
  Purpose:  Change for a Dollar Game
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
    int pennies,        //Number of pennies
        nickels,        //Number of nickels
        dimes,          //Number of dimes
        quartrs;        //Number of quarters
    float total;        //Total
    
    //Input values
    cout<<"This program will challenge you to make a quantity of pocket change equal"<<endl;
    cout<<"one dollar exactly.  Please enter the following values when prompted."<<endl;
    cout<<endl;
    cout<<"Enter the number of pennies: ";
    cin>>pennies;
    cout<<"Enter the number of nickels: ";
    cin>>nickels;
    cout<<"Enter the number of dimes: ";
    cin>>dimes;
    cout<<"Enter the number of quarter: ";
    cin>>quartrs;
            
    //Process by mapping inputs to outputs
    total=((pennies*.01)+(nickels*.05)+(dimes*.10)+(quartrs*.25));
    
    //Output values
    if (total==1){
        cout<<"Congratulations! You total equals $1.00.  You win!";
    }
    else if (total>1){
        cout<<"Sorry, your total is more than $1.00.  Please try again.";
    }
    else if (total<1){
        cout<<"Sorry, your total is less than $1.00.  Please try again.";
    }
    //Exit stage right!
    return 0;
}