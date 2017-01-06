/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 5, 2017, 6:30 PM
  Purpose:  Circuit board price and profit calculator
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const int PERCENT=100; //Constant integer identifying percentage
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float brdPrce=14.95,    //Float indicating circuit board cost
          pftMrgn=135,       //Indicates profit margin 35%  
          prce;             //Retail price for 35% margin
    //Input values
    
    //Process by mapping inputs to outputs
    prce=brdPrce*pftMrgn/PERCENT;   //Board price times profit margin percent
    int id=prce*100+0.5;            //Rounds to 2 decimal places
    prce=id/100.0f;
    //Output values
    cout<<"This program calculates the retail price of a circuit board"<<endl;
    cout<<"that must be set in order to achieve a 35% profit at the"<<endl;
    cout<<"cost indicated below."<<endl;
    cout<<"Circuit board cost:         $"<<static_cast<float>(brdPrce)<<" per unit"<<endl;
    cout<<"Desired profit margin:      "<<pftMrgn-100<<"%"<<endl;
    cout<<"Suggested retail price:     $"<<prce<<" per unit"<<endl;
    //Exit stage right!
    return 0;
}
