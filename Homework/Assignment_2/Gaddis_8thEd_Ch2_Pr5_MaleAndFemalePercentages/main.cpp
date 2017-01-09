/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 9, 2017, 1:30 PM
  Purpose:  Male and Female class percentage calculator
 */

//System Libraries
#include <iostream>
#include <iomanip>  //Needed for setprecision
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const int PERCENT=100;  //Constant integer for percent conversion
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int males,      //Number of males
        females;    //Number of females
    float perMale,  //Percentage of males
          perFeml,  //Percentage of females
          total;    //Males Plus Females
    //Input values
    cout<<"This program will calculate the percentage of males and females"<<endl;
    cout<<"in a particular class based on number of males and females input."<<endl;
    cout<<"Enter the number of males in the class: ";
    cin>>males;
    cout<<"Enter the number of females in the class: ";
    cin>>females;
    //Process by mapping inputs to outputs
    total=males+females;
    perMale=(males/total)*PERCENT;
    perFeml=(females/total)*PERCENT;
    //Output values
    cout<<"The percentage of males in the class is "<<fixed<<setprecision(2)<<perMale<<"%"<<endl;
    cout<<"The percentage of females in the class is "<<fixed<<setprecision(2)<<perFeml<<"%"<<endl;
    //Exit stage right!
    return 0;
}