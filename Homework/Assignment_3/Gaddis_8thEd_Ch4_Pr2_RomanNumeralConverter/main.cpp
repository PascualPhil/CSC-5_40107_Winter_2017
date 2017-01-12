/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 12, 2017, 12:55 PM
  Purpose:  Roman Numeral Converter
 */

//System Libraries
#include <iostream>
#include <string>
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
    unsigned short number;      //Number to be converted
    string roman;                 //Roman numeral 
    
    
    //Input values
    cout<<"This program will convert a number from 1-10 into Roman Numerals."<<endl;
    cout<<"Please enter a number 1-10: ";
    cin>>number;
    
    //Process by mapping inputs to outputs
    cout<<"The roman numeral for "<<number<<" is: ";
    switch(number){
            case 1:cout<<"I";break;
            case 2:cout<<"II";break;
            case 3:cout<<"III";break;
            case 4:cout<<"IV";break;
            case 5:cout<<"V";break;
            case 6:cout<<"VI";break;
            case 7:cout<<"VII";break;
            case 8:cout<<"VIII";break;
            case 9:cout<<"IX";break;
            case 10:cout<<"X";break;
        default:cout<<"Please enter a number between 1-10.";
    }      
    //Output values
    
    //Exit stage right!
    return 0;
}