/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 5, 2017, 1:15 PM
  Purpose:  Freefall Problem
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const float GRAVITY=3.2174e1f; //Gravity on the earth sea level in ft/sec^2

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float time, //Time in seconds
            distnce; //Distance in feet
    
    //Input values
    cout<<"This problem solves the distance traveled"<<endl;
    cout<<"in free-fall under the influence of Earth gravity."<<endl;
    cout<<"Input the time during free-fall in seconds:"<<endl;
    cin>>time; //User input of time in seconds
    
    //Process by mapping inputs to outputs
    distnce=GRAVITY*time*time/2;
    int id=distnce*100+0.5; //Integer ID for rounding to 2 decimal places
    distnce=id/100.0f;
            
    //Output values
    cout<<"The distance fallen in "<<time<<" seconds = "<<distnce<<" ft."<<endl;
    //Exit stage right!
    return 0;
}