/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 9, 2017, 1:00 PM
  Purpose:  Test average calculator.
 */

//System Libraries
#include <iostream>
#include <iomanip> //For setprecision
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
    int testOne,    //Test 1 score
        testTwo,    //Test 2 score
        testThr,    //Test 3 score
        testFou,    //Test 4 score
        testFiv;    //Test 5 score
    float avg;      //Average of scores 1-5
    //Input values
    cout<<"This program will calculate the average of 5 input test scores."<<endl;
    cout<<"Enter Test 1 Score:"<<endl;
    cin>>testOne;
    cout<<"Enter Test 2 Score:"<<endl;
    cin>>testTwo;
    cout<<"Enter Test 3 Score:"<<endl;
    cin>>testThr;
    cout<<"Enter Test 4 Score:"<<endl;
    cin>>testFou;
    cout<<"Enter Test 5 Score:"<<endl;
    cin>>testFiv;
    //Process by mapping inputs to outputs
    avg=(testOne+testTwo+testThr+testFou+testFiv)/5.0;
    //Output values
    cout<<"The average of the five test scores is: "<<fixed<<setprecision(2)<<avg<<"%"<<endl;
    //Exit stage right!
    return 0;
}
