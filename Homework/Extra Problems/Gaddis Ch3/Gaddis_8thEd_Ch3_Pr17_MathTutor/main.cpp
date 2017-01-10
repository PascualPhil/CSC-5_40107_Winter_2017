/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 10, 2017, 1:00 PM
  Purpose:  Math tutoring program
 */

//System Libraries
#include <iostream>
#include <cstdlib>      //For random generator
#include <ctime>        //For time function
#include <iomanip>      //For setprecision
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
    
    //Input values
    unsigned seed=time(0);      //System time to seed RNG
    unsigned short numbOne,        //First number to be added
        numbTwo;        //Second number to be added
    unsigned short sum;            //Sum of first and second numbers
    char ch;
    //Process by mapping inputs to outputs
    srand(seed);
    numbOne=rand()%1000;
    numbTwo=rand()%1000;
    sum=numbOne+numbTwo;
    //Output values
    cout<<"This program will help test your math skills.  Press [Enter] once to get a problem."<<endl;
    cout<<"Once you've think you've solved the problem.  Press [Enter] again to get the answer."<<endl;
    cin.get(ch);
    cout<<"  "<<right<<setw(5)<<numbOne<<endl;
    cout<<"+ "<<right<<setw(5)<<numbTwo<<endl;
    cout<<"-------";
    cin.get();
    cout<<" "<<right<<setw(6)<<sum<<endl;
    //Exit stage right!
    return 0;
}
