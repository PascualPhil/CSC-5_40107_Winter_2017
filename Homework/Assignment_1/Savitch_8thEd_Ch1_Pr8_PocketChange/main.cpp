/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 5, 2017, 1:35 PM
  Purpose:  Pocket Change problem
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
    const int QUARTER=25, //Number of cents in coinage
           DIME=10, 
           NICKEL=5,
           PENNY=1;
    int nQuartr,nDimes,nNickl,nPennys;
    unsigned short total;  //Total amount of pocket change in cents
    int totDol, totCent;   //Will convert cents to $x.xx
    
    //Input values
    cout<<"This calculates the amount of your pocket change"<<endl;
    cout<<"How many Quarters, Nickels, Dimes, and Pennies do"<<endl;
    cout<<"you have in your pockets?"<<endl;
    cout<<"Type in all on the same line (i.e. 3 4 0 2)"<<endl;
    cout<<"Quarters?"<<endl;
    cin>>nQuartr;
    cout<<"Dimes?"<<endl;
    cin>>nDimes;
    cout<<"Nickels?"<<endl;
    cin>>nNickl;
    cout<<"Pennies?"<<endl;
    cin>>nPennys;
    
    //Process by mapping inputs to outputs
    total=nQuartr*QUARTER+      //Calculating and adding amount of coins
          nDimes*DIME+
          nNickl*NICKEL+
          nPennys*PENNY;
    totDol=total/100;           //Converting into number of dollars
    totCent=total%100;           //Obtaining number of cents
    //Output values
    cout<<"The coins in your pocket = "<<total<<" cents"<<endl;
    cout<<"The coins in your pocket = $"<<totDol<<"."<<totCent<<endl;
    //Exit stage right!
    return 0;
}