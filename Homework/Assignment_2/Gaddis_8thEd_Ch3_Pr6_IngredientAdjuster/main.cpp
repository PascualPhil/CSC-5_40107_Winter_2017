/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 9, 2017, 3:45 PM
  Purpose:  Ingredient adjuster program.
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
    float sugar=1.5;    //Sugar per 48 cookies
    int butter=1;       //Butter per 48 cookies
    float flour=2.75;   //Flour per 48 cookies
    int cookies;        //Number of cookies desired
    float adjust;       //Cookies/48
    float totSug,       //Total sugar
          totBut,       //Total butter
          totFlo;      //Total flour
    //Input values
    cout<<"This program will calculate the amount of sugar, butter, and flour"<<endl;
    cout<<"required for a desired amount of cookies."<<endl;
    cout<<"Please enter the number of cookies that you would like to make: ";
    cin>>cookies;
    
    //Process by mapping inputs to outputs
    adjust=cookies/(float)48;
    totSug=adjust*sugar;
    totBut=adjust*butter;
    totFlo=adjust*flour;
    
    //Output values
    cout<<"The amount of sugar, butter, and flour needed for "<<cookies<<" cookies is:"<<endl;
    cout<<"Sugar      = "<<fixed<<setprecision(2)<<totSug<<" cups"<<endl;
    cout<<"Butter     = "<<fixed<<setprecision(2)<<totBut<<" cups"<<endl;
    cout<<"Flour      = "<<fixed<<setprecision(2)<<totFlo<<" cups"<<endl;
    //Exit stage right!
    return 0;
}
