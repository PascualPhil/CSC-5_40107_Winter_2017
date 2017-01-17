/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 17, 2017, 11:05 AM
  Purpose:  Grade calculator with while loop
 */

//System Libraries
#include <iostream>     //I/O library
#include <cstdlib>      //For srand seed
#include <ctime>        //Time library
#include <iomanip>      //Format library
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and Initialize local Variables to main
    char numStd=20,
         student=0;         //Number of students
    unsigned short average=0;
    
    //Input values
    cout<<"This program will take an input score and will output the letter grade for "
            <<static_cast<int>(numStd)<<" students."<<endl;
    
    //Loop for each student
    while(++student<=numStd){
        //Assign a grade and add to the average
        //Score and grade are local to the while loop
        unsigned short score=rand()%50+50;
        average+=score;
        //Process by mapping inputs to outputs
        char grade=(score>=90)?'A':
                   (score>=80)?'B':
                   (score>=70)?'C':
                   (score>=60)?'D':'F';
        //Output values
        cout<<"Student "<<setw(2)<<static_cast<int>(student)
                <<" has score "<<score<<" = "<<grade<<endl;
    }
    //Calculate and output the average
    average/=numStd;
    cout<<"The average test score is = "<<average<<endl;
    //Exit stage right!
    return 0;
}