/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 9, 2017, 4:30 PM
  Purpose:  Widget calculator program.
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

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float widWght=12.5,     //Widget weight
          empWght,          //Empty pallet weight
          fulWght,          //Full pallet weight
          fMinusE,          //Full minus empty
          numWigt;          //Number of widgets
    
    //Input values
    cout<<"This program will calculate the number of widgets on a pallet using"<<endl;
    cout<<"the weight of an empty pallet and the weight of the pallet with an"<<endl;
    cout<<"undetermined number of widgets."<<endl;
    cout<<"Please enter the empty weight of the pallet in pounds: ";
    cin>>empWght;
    cout<<"Please enter the weight of the pallet with stacked widgets: ";
    cin>>fulWght;
    
    //Process by mapping inputs to outputs
    fMinusE=fulWght-empWght;
    numWigt=fMinusE/widWght;
    
    //Output values
    cout<<"The number of widgets calculated is "<<static_cast<int>(numWigt)<<" widgets"<<endl;
    //Exit stage right!
    return 0;
}
