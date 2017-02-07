/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on February 7, 2017, 12:30 PM
  Purpose:  Blackjack version 2 - Project 2
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const float PERCENT=100.0;          //Constant float for percentage conversion

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set RNG seed
    srand(static_cast<unsigned int>(time(0)));//Sets RNG seed
    
    //Instantiate and open files
    ifstream in;
    ofstream out;
    in.open("blackjackstats.txt");
    out.open("blackjackstats.txt");
    
    //Declare Variables
    
    //Input values
    
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}