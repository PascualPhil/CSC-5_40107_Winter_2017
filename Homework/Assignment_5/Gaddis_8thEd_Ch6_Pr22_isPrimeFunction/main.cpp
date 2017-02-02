/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on February 2, 2017, 1:00 PM
  Purpose:  Prime number determination program
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
void isPrime();

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    
    //Input values
    cout<<"This program will determine if an integer entered by the"<<endl;
    cout<<"user is a prime number or not.  Please enter all required information"<<endl;
    cout<<"when requested."<<endl;
    cout<<endl;
    
    //Process by mapping inputs to outputs
    isPrime();
    
    //Output values

    //Exit stage right!
    return 0;
}

//******************************************************************************
//                          Prime Number Calculator
//Description: Determines if a user-entered integer is a prime number
//Input: Integer
//Output: True/False
//******************************************************************************
void isPrime(){
    int num;
    cout<<"Please enter a whole integer: ";
    cin>>num;
    bool prime=true;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            prime=false;
            break;
        }
    }
    if(prime){
        cout<<"This is a prime number.";
    }
    else{
        cout<<"This is not a prime number.";
    }
}