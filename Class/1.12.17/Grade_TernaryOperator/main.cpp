/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 12, 2017, 11:20 AM
  Purpose:  Grade calculator with ternary operator.
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
    cout<<"This program will take an input score and will output"
            " the letter grade."<<endl;
    cout<<"Input the score 0 to 100: ";
    cin>>score;
    
    //Process by mapping inputs to outputs
    grade=(score>=90)?'A':
          (score>=80)?'B':
          (score>=70)?'C':
          (score>=60)?'D':'F';
    
    //Output values
    cout<<"Your score of "<<score<<" = "<<grade<<endl;
    
    //Exit stage right!
    return 0;
}