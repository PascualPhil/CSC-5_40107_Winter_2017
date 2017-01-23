/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 23, 2017, 12:30 PM
  Purpose:  Division sales comparison program. Gaddis-Ch6-Pr3
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
int getSale();           //Function validating and storing sales numbers
void highest();             //Function comparing and displaying division with
                            //highest sales

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    string divName;     //Division name
    int numDivs=4;      //Number of company divisions
    
    //Program description
    cout<<"This program will determine which of a company's 4 sales divisions had"<<endl;
    cout<<"the highest sales numbers for a quarter.  Please enter the required"<<endl;
    cout<<"information when prompted."<<endl;
    
    //Loops to obtain and validate input
    for(int div=1;div<=numDivs;div++){
        cout<<"Please enter the name of Division "<<div<<": ";
        cin>>divName;
        getsale();
    }            
    
    //Exit stage right!
    return 0;
}
int getsale(){
    int sales;          //Sales for division
    cout<<"Please enter quarterly sales for "<<divName<<": $";
    cin>>sales;
    while(sales<0){
        cout<<"Please enter a positive dollar amount: $";
        cin>>sales;
    }
}