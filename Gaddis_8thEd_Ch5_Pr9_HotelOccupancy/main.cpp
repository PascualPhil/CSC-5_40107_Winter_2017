/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 18, 2017, 1:20 PM
  Purpose:  Hotel Occupancy
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
const int PERCENT=100.0;        //Constant integer for percent conversion
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int floors,                 //Number of floors
        roomsFl,                //Rooms per floor
        totRms,                 //Total rooms
        occRms,                 //Occupied rooms per floor
        totOcc,                 //Total occupied rooms
        totEmp;                 //Empty rooms
    float prcOcc;                 //Occupancy percentage
    
    //Input values
    cout<<"This program will calculate hotel occupancy based on the number of floors,"<<endl;
    cout<<"rooms per floor, and number of rooms occupied as input by the user.  Please"<<endl;
    cout<<"enter the required information when prompted."<<endl;
    cout<<endl;
    cout<<"Please enter the number of floors: ";
    //Loop to validate input of # of floors
    cin>>floors;
    while(floors<1){
        cout<<"Please enter a number greater than 1: ";
        cin>>floors;
    }
    //Loop to obtain number of rooms per floor and occupied rooms per floor
    for(int flrNum=1;flrNum<=floors;flrNum++){
        if(flrNum!=13)
            cout<<"Please enter the number of rooms on Floor "<<flrNum<<": ";
            cin>>roomsFl;
            totRms+=roomsFl;    //Total rooms accumulator
            //Loop for input validation for rooms per floor
            while(roomsFl<10){
                cout<<"Please enter a number greater than 10: ";
                cin>>roomsFl;
            }
            cout<<"Please enter the number of rooms occupied on Floor "<<flrNum<<": ";
            cin>>occRms;
            //Loop to validate that rooms occupied less than/equal to rooms per floor
            while(occRms>roomsFl){
                cout<<"Please ensure # of rooms occupied less than or equal to # of rooms"<<endl;
                cout<<"on Floor "<<flrNum<<": ";
                cin>>occRms;
            }
            totOcc+=occRms;     //Occupied rooms accumulator         
    }
            //Occupancy percentage calculator
            prcOcc=totOcc/totRms; 
    //Output values
    cout<<"Total number of rooms: "<<totRms<<endl;
    cout<<"Rooms occupied: "<<totOcc<<endl;
    cout<<"Rooms unoccupied: "<<totEmp<<endl;
    cout<<"Occupancy Percentage: "<<fixed<<setprecision(2)<<prcOcc*100<<"%"<<endl;
    //Exit stage right!
    return 0;
}