/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on February 2, 2017, 12:15 PM
  Purpose:  Population size calculator
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const float PERCENT=100.0f;//Constant float for percent conversion
//Function Prototypes
void popCalc(int,float,float,int);//Function prototype for population
                                  //calculator

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int popInit,//Initial population
        nYears;//Number of years to calculate
    float bRate,//Birth rate in percent
          dRate;//Death rate in percent
    
    //Input values
    cout<<"This program will calculate a population's size after a user-defined"<<endl;
    cout<<"number of years based on initial population, birth, and death rates."<<endl;
    cout<<"Please enter all required information when requested."<<endl;
    cout<<endl;
    
    //Process by mapping inputs to outputs
    popCalc(popInit,bRate,dRate,nYears);
    
    //Output values

    //Exit stage right!
    return 0;
}
//******************************************************************************
//                          Population Calculator
//Description: Will calculate and display yearly increase/decrease in population
//Input: Initial population size, birth rate, death rate, number of years
//Output: Population after year
//******************************************************************************
void popCalc(int popInit,float bRate,float dRate,int nYears){
    int total=0;//Total population
    cout<<"Please enter the initial population: ";
    cin>>popInit;
    while(popInit<2){
        cout<<"Please enter an initial population size greater than 2: ";
        cin>>popInit;
    }
    cout<<"Please enter the birth rate in percent: ";
    cin>>bRate;
    while(bRate<0){
        cout<<"Please enter a number greater than zero: ";
        cin>>bRate;
    }
    cout<<"Please enter the death rate in percent: ";
    cin>>dRate;
    while(dRate<0){
        cout<<"Please enter a number greater than zero: ";
        cin>>dRate;
    }
    cout<<"Please enter the number of years to display: ";
    cin>>nYears;
    while(nYears<1){
        cout<<"Please enter a number greater than or equal to 1: ";
        cin>>nYears;
    }
    cout<<"Year     Population"<<endl;
    for (int years=1;years<=nYears;years++){
        popInit=popInit+((bRate/PERCENT)*popInit)-((dRate/PERCENT)*popInit);
        cout<<setw(4)<<years<<"       "<<setw(8)<<static_cast<int>(popInit)<<endl;
    }
}