/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 9, 2017, 12:20 PM
  Purpose:  Miles per Gallon Calculator Program
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
    int gasCap,    //Gasoline capacity
        miles;     //Miles on a full tank
    float mpg;       //Miles per gallon     
    //Input values
    cout<<"This program will calculate the miles per gallon of a particular car"<<endl;
    cout<<"based on the car's gasoline capacity and miles that can be driven on"<<endl;
    cout<<"a full tank."<<endl;
    cout<<"Enter the number of gallons the car can hold:"<<endl;
    cin>>gasCap;
    cout<<"Enter the miles that can be driven on a full tank:"<<endl;
    cin>>miles;
    
    //Process by mapping inputs to outputs
    mpg=miles/(float)gasCap;   //MPG=gas capacity / miles on a full tank
   
    //Output values
    cout<<"Based on the information input, the miles per gallon is: "<<mpg<<" miles per gallon."<<endl;
    //Exit stage right!
    return 0;
}
