/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 9, 2017, 5:50 PM
  Purpose:  Automobile costs calculator
 */

//System Libraries
#include <iostream>
#include <iomanip>  //For setprecision
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
    float loan,             //Monthly loan
            insure,         //Monthly insurance
            gas,            //Monthly gas
            oil,            //Monthly oil
            tires,          //Monthly tires
            maint,          //Monthly maintenance
            moTotl,         //Monthly total
            annTotl;        //Yearly total
    
    //Input values
    cout<<"This program will calculate monthly and yearly totals for car-related"<<endl;
    cout<<"expenses.  Please enter the required information when prompted."<<endl;
    cout<<"Monthly car loan? ";
    cin>>loan;
    cout<<"Monthly insurance premium? ";
    cin>>insure;
    cout<<"Monthly gas expenses? ";
    cin>>gas;
    cout<<"Monthly oil expenses? ";
    cin>>oil;
    cout<<"Monthly tire expenses? ";
    cin>>tires;
    cout<<"Monthly maintenance costs? ";
    cin>>maint;
    
    //Process by mapping inputs to outputs
    moTotl=loan+insure+gas+oil+tires+maint;  //Monthly costs=Monthly total
    annTotl=moTotl*12;                       //Annual costs=Monthly costs*12
    
    //Output values
    cout<<"Your monthly maintenance costs total:      $"<<fixed<<setprecision(2)<<moTotl<<endl;
    cout<<"Your annual maintenance costs total:       $"<<fixed<<setprecision(2)<<annTotl<<endl;
    //Exit stage right!
    return 0;
}
