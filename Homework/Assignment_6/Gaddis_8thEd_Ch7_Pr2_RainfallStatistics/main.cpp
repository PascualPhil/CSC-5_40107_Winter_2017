/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on February 3, 2017, 3:30 PM
  Purpose:  Rainfall Program
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

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=12;//Constant defining size of arra
    int rain[SIZE];//Array to store rainfall data
    int totRain=0,minRain,maxRain,minMon,maxMon;
    float avgRain;
    
    //Input values
    cout<<"This program will calculate average, total, and minimum/maximum"
            <<endl;
    cout<<"rainfall for a year.  Please enter all required information when"
            <<endl;
    cout<<"prompted."<<endl;
    cout<<endl;
    
    //Obtain/store rainfall data
    for(int month=0;month<=SIZE-1;month++){
        cout<<"Please enter rainfall data for Month "<<month+1<<": ";
        cin>>rain[month];
        while(rain[month]<0){
            cout<<"Please enter a positive number: ";
            cin>>rain[month];
        }
        totRain+=rain[month];//Accumulates rain total      
    }
    
    //Process by mapping inputs to outputs
    //Obtains average monthly rainfall
    avgRain=static_cast<float>(totRain)/SIZE;
    minRain=maxRain=rain[0];
    minMon=maxMon=1;
    for(int mo=0;mo<=SIZE-1;mo++){
        if(rain[mo]<minRain){
            minRain=rain[mo];
            minMon=mo+1;
        }
        else if(rain[mo]>maxRain){
            maxRain=rain[mo];
            maxMon=mo+1;
        }
    }
   
    //Output values
    cout<<"Total rainfall for the year is: "<<totRain<<" inches."<<endl;
    cout<<"Average monthly rainfall is : "<<fixed<<setprecision(2)<<avgRain
            <<" inches/month."<<endl;
    cout<<"Maximum rainfall is Month "<<maxMon<<" with "<<maxRain<<" inches."
            <<endl;
    cout<<"Minimum rainfall is Month "<<minMon<<" with "<<minRain<<" inches."
            <<endl;
    //Exit stage right!
    return 0;
}