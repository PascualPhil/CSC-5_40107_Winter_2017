/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 14, 2017, 7:25 PM
  Purpose:  Body Mass Index Calculator
 */

//System Libraries
#include <iostream>
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
    float weight,     //Weight in pounds
          height,     //Height in inches
          bmi;        //Body mass index
    
    //Input values
    cout<<"This program will determine your Body Mass Index (BMI) and your weight category."<<endl;
    cout<<"Please enter all required information when prompted."<<endl;
    cout<<endl;
    cout<<"Please enter your height in whole inches: ";
    cin>>height;
    cout<<"Please enter weight in whole pounds: ";
    cin>>weight;
    
    //Process by mapping inputs to outputs
    bmi=weight*(703/(height*height));   //Equation that determines BMI
    if (bmi>=18.5 && bmi<=25){
        cout<<"Your BMI is "<<fixed<<setprecision(2)<<bmi<<" and you are considered of OPTIMAL weight."<<endl;
    }
    else if (bmi>25){
            cout<<"Your BMI is "<<fixed<<setprecision(2)<<bmi<<" and you are considered OVERWEIGHT."<<endl;
    }
    
    else if (bmi<18.5){
                cout<<"Your BMI is "<<fixed<<setprecision(2)<<bmi<<" and you are considered UNDERWEIGHT."<<endl;
    }
    //Output values

    //Exit stage right!
    return 0;
}