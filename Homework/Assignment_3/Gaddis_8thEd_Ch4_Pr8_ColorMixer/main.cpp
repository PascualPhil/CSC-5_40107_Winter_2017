/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 3, 2017, 12:15 PM
  Purpose:  Template to be used in all programming
            projects!
 */

//System Libraries
#include <iostream>
#include <string>       //For string identifier
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
    string color1,      //First color entered
           color2;      //Second color entered  
    //Input values
    cout<<"This program will determine the combination of two primary colors input."<<endl;
    cout<<"Please enter required information when prompted."<<endl;
    cout<<"Please enter the first color (red, yellow, blue): ";
    cin>>color1;
    cout<<"Please enter the second color (red, yellow, blue): ";
    cin>>color2;
    
    //Process by mapping inputs to outputs
    if (color1=="red"){
        if (color2=="blue"){
            cout<<color1<<" and "<<color2<<" combine to make purple.";
        }
        else if (color2=="yellow"){
            cout<<color1<<" and "<<color2<<" combine to make orange.";
        }
        else
            cout<<"Please input a valid secondary color.";
    }
    else if (color1=="blue"){
        if (color2=="red"){
            cout<<color1<<" and "<<color2<<" combine to make purple.";
        }
        else if (color2=="yellow"){
            cout<<color1<<" and "<<color2<<" combine to make green.";
        }
        else
            cout<<"Please input a valid secondary color.";
    }
    else if (color1=="yellow"){    
        if (color2=="red"){
            cout<<color1<<" and "<<color2<<" combine to make orange.";
        }
        else if (color2=="blue"){
            cout<<color1<<" and "<<color2<<" combine to make green.";
        }
        else
            cout<<"Please input a valid secondary color.";
    }
    else {
        cout<<"Please choose a different primary color.";
    }

    //Output values

    //Exit stage right!
    return 0;
}   