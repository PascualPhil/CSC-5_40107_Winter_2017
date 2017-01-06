/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 5, 2017, 8:45 PM
  Purpose:  Future sales calculation program
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const int PERCENT=100;  //Constant integer defining percent

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int sales=8.6e6;  //Sales in dollars for company
    int percTot=58;    //Percentage of division sales in percent
    int totSale;      //Estimated year-end sales for division
    
    //Input values
    
    //Process by mapping inputs to outputs
    totSale=sales*58/PERCENT;   //Company sales times division sales percent
    
    //Output values
    cout<<"This program calculates the amount of East Division sales"<<endl;
    cout<<"based on company sales and percentage of East Division business."<<endl;
    cout<<"Total company sales at year-end:     $"<<static_cast<int>(sales)<<endl;
    cout<<"Percentage of East Division sales:   "<<static_cast<int>(percTot)<<"%"<<endl;
    cout<<"Estimated East Division sales:       $"<<totSale<<endl;
    
    //Exit stage right!
    return 0;
}
