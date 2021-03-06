/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 9, 2017, 11:30 AM
  Purpose:  Random number generator for dice
 */

//System Libraries
#include <iostream> //Input output
#include <cstdlib>  //Random number generator and seed
#include <ctime>    //Time used for RNG seed
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the RNG seed
    srand(static_cast<unsigned int>(time(0)));  //RNG seed with time of now as unsigned int
    //Declare Variables
    unsigned char die1,die2,sum;     //Dice 1 and Dice 2 and Sum
    
    //Input values
    die1=rand()%6+1;    //RNG mod 6+1
    die2=rand()%6+1;
    //Process by mapping inputs to outputs
    sum=die1+die2;
    //Output values
    cout<<"Die 1 = "<<static_cast<int>(die1)<<endl;
    cout<<"Die 2 = "<<static_cast<int>(die2)<<endl;
    cout<<"Sum   = "<<static_cast<int>(sum)<<endl;
    //Exit stage right!
    return 0;
}
