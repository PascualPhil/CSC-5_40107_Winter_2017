/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 9, 2017, 12:52 PM
  Purpose:  Stadium Seating Calculator Program!
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
    int classA=15,  //Class A seat prices
        classB=12,  //Class B seat prices
        classC=9,   //Class C seat prices
        seatsA,     //Class A seats sold
        seatsB,     //Class B seats sold
        seatsC,     //Class C seats sold
        revenue;    //Total revenue
    //Input values
    cout<<"This program will calculate stadium revenue based on number"<<endl;
    cout<<"of seats sold in each seat class."<<endl;
    cout<<"Enter number of Class A seats sold:"<<endl;
    cin>>seatsA;
    cout<<"Enter number of Class B seats sold:"<<endl;
    cin>>seatsB;
    cout<<"Enter number of Class C seats sold:"<<endl;
    cin>>seatsC;
    //Process by mapping inputs to outputs
    revenue=(seatsA*classA)+(seatsB*classB)+(seatsC*classC);
    //Output values
    cout<<"Total revenue based on number of seats sold is:   $"<<revenue<<endl;
    //Exit stage right!
    return 0;
}
