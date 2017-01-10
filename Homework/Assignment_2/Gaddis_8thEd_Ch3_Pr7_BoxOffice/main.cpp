/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 9, 2017, 4:00 PM
  Purpose:  Box office receipt calculator.
 */

//System Libraries
#include <iostream>
#include <iomanip>      //For setprecision
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const int PERCENT=100;     //Constant integer for percent conversion
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    string movie;           //Movie name
    
    int adult=10,           //Adult ticket price
        child=6,            //Child ticket price
        adulTix,            //Adult tickets sold
        chilTix,            //Child tickets sold
        adRevn,             //Adult revenue
        chRevn;             //Child revenue
        
    float netProf,          //Net profit
          groPerc=20.0,     //Box Office keeps
          distCut,          //Distributor cut
          totRevn;            //Total revenue/Gross profit
    //Input values
    cout<<"This program will calculate the gross and net profits of a movie"<<endl;
    cout<<"based on the number of adult and child tickets sold.  Please enter"<<endl;
    cout<<"the desired information when prompted."<<endl;
    cout<<"Please enter the name of the movie: ";
    getline(cin, movie);
    cout<<"Adult tickets sold: ";
    cin>>adulTix;
    cout<<"Child tickets sold: ";
    cin>>chilTix;
    
    //Process by mapping inputs to outputs
    adRevn=adult*adulTix;
    chRevn=child*chilTix;
    totRevn=adRevn+chRevn;
    netProf=totRevn*(groPerc/PERCENT);
    distCut=totRevn-netProf;
        
    //Output values
    cout<<"Movie name:             "<<movie<<endl;
    cout<<"Adult Tickets Sold:     "<<adulTix<<endl;
    cout<<"Child Tickets Sold:     "<<chilTix<<endl;
    cout<<"Gross Profit:           $"<<fixed<<setprecision(2)<<totRevn<<endl;
    cout<<"Net Profit:             $"<<fixed<<setprecision(2)<<netProf<<endl;
    cout<<"Amount to Distributor:  $"<<fixed<<setprecision(2)<<distCut<<endl;
    
    //Exit stage right!
    return 0;
}
