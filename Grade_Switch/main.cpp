/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 12, 2017, 11:20 AM
  Purpose:  Grade calculator with switch case.
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
    unsigned short score;
    char grade;
    
    //Input values
    cout<<"This program will take an input score and will output the letter grade."<<endl;
    cout<<"Input the score 0 to 100: ";
    cin>>score;
    
    //Process by mapping inputs to outputs
    switch(score/10){
        case 11:
        case 10:
        case  9:grade='A';break;
        case  8:grade='B';break;
        case  7:grade='C';break;
        case  6:grade='D';break;
        default:grade='F';
    }
        
    //Output values
    cout<<"Your score of "<<score<<" = "<<grade<<endl;
    
    //Exit stage right!
    return 0;
}