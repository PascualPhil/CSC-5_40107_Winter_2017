/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 19, 2017, 10:00 AM
  Purpose:  Population growth calculator
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const int PERCENT=100;      //Constant integer to convert percentages
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float days,       //Days of population growth to be calculated
        pop;        //Population
    float rate;     //Growth rate
    
    //Input values
    cout<<"This program will calculate growth of a population based on the growth rate,"<<endl;
    cout<<"initial population, and days of growth input by the user.  Please enter all required"<<endl;
    cout<<"information when prompted."<<endl;
    
    //Loop to obtain days and validate input
    cout<<"Please enter the number of days of population growth to be calculated: ";
    cin>>days;
    while(days<=0){
        cout<<"Please enter a number greater than zero: ";
        cin>>days;
    }
    
    //Loop to obtain population and validate input
    cout<<"Please enter the initial population: ";
    cin>>pop;
    while(pop<2){
        cout<<"Please enter an initial population greater than 2: ";
        cin>>pop;
    }
    
    //Loop to obtain growth rate and validate input
    cout<<"Please enter the growth rate in percent: ";
    cin>>rate;
    while(rate<0){
        cout<<"Please enter a positive growth rate: ";
        cin>>rate;
    }
    
    //Loop to calculate population growth
    for(int calcDay=1;calcDay<=days;calcDay++){
        pop=pop+(pop*(rate/100.0));
        cout<<calcDay<<"     "<<pop<<endl;
    }
    //Output values

    //Exit stage right!
    return 0;
}