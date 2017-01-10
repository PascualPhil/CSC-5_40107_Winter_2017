/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 9, 2017, 9:20 PM
  Purpose:  Currency exchange calculator program.
 */

//System Libraries
#include <iostream>
#include <iomanip>  //For setprecision
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
    const float YENDOL=98.93,   //# of Yen to $1
                EURDOL=0.74;    //# of Euro to $1
    float numdol,       //Number of dollars to convert
          convYen,      //Converted to Yen
          convEur;      //Converted to Euro
    //Input values
    cout<<"This program will convert US Dollars to Yen and Euro at current exchange"<<endl;
    cout<<"exchange rates.  Please enter the number of US Dollars to be converted"<<endl;
    cout<<"when prompted."<<endl;
    cout<<"Number of US Dollars to be converted? ";
    cin>>numdol;
    
    //Process by mapping inputs to outputs
    convYen=numdol*YENDOL;
    convEur=numdol*EURDOL;
    
    //Output values
    cout<<"The number of Yen in $"<<fixed<<setprecision(2)<<numdol<<" is:      "<<fixed<<setprecision(2)<<convYen<<" Yen."<<endl;
    cout<<"The number of Euro in $"<<fixed<<setprecision(2)<<numdol<<" is:     "<<fixed<<setprecision(2)<<convEur<<" Euro.";
    //Exit stage right!
    return 0;
}
