/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 23, 2017, 12:10 PM
  Purpose:  Markup Calculator - Gaddis Ch6 Pr1
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const float PERCENT=100;    //Constant percentage converter

//Function Prototypes
void calcRet(float,float);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float whlsale,      //Wholesale price
          markUp;       //Markup

    //Program description
    cout<<"This program will determine the retail price of an item based on its"<<endl;
    cout<<"wholesale price and the percent markup.  Please enter the required"<<endl;
    cout<<"information when prompted."<<endl;
    
    //Initial inputs with input validation loops
    cout<<endl;
    cout<<"Please enter the wholesale price of the item: $";
    cin>>whlsale;
    while(whlsale<0){
        cout<<"Please enter a positive dollar amount: $";
        cin>>whlsale;
    }
    cout<<"Please enter the markup percentage: ";
    cin>>markUp;
    while(markUp<0){
        cout<<"Please enter a positive percentage: ";
        cin>>markUp;
    }
    cout<<endl;  
    
    //Function call
    calcRet(whlsale,markUp);
    
    //Exit stage right!
    return 0;
}

//******************************************************************************
//Definition of function calcRet:  Determines retail price by multiplying retail
//markup percentage by wholesale price, and adding to wholesale price.
//******************************************************************************
void calcRet(float whlsale, float markUp){
    float retPrc;
    retPrc=whlsale+(whlsale*markUp/PERCENT);
    cout<<"The retail price for the item is: $"<<fixed<<setprecision(2)<<retPrc<<endl;
}