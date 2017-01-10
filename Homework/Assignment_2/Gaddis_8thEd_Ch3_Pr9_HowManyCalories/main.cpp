
/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 9, 2017, 5:00 PM
  Purpose:  Calorie Calculator
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
    float calServ=300,    //Calories per serving
            numCook,    //Number of cookies eaten
            cookSer=3,  //Cookies per serving
            numServ;    //Number of servings
    float numCals;      //Number of calories
    //Input values
    cout<<"This program will calculate the number of calories were consumed for"<<endl;
    cout<<"a number of cookies eaten."<<endl;
    cout<<"Please enter the number of cookies eaten: ";
    cin>>numCook;
    
    //Process by mapping inputs to outputs
    numCals=(numCook/cookSer)*calServ;
            
    //Output values
    cout<<"The number of calories consumed is:  "<<numCals<<" calories"<<endl;
            
    //Exit stage right!
    return 0;
}
