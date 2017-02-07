/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on February 5, 2017, 7:45 PM
  Purpose:  Payroll Calculator Program
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
    const int SIZE=7;
    string empId[SIZE]={"5658845","4520125","7895122","8777541","8451277",
        "1302850","7580489"};
    int hours[SIZE];
    float wages[SIZE],payRate[SIZE];
    
    //Input values
    cout<<"This program will calculate a worker's gross wages based on the"
            <<endl;
    cout<<"number of hours worked and their pay rate.  Please enter all"
            <<endl;
    cout<<"required information when requested."<<endl;
    cout<<endl;
    
    //Loop to obtain hours and hourly wage
    for(int num=0;num<=SIZE-1;num++){
        cout<<"Please enter the number of hours worked for employee "
                <<empId[num]<<": ";
        cin>>hours[num];
        while(hours[num]<=0){
            cout<<"Please enter a number greater than zero: ";
            cin>>hours[num];
        }
        cout<<"Please enter the hourly wage for employee "
                <<empId[num]<<": ";
        cin>>wages[num];
        while(wages[num]<=0){
            cout<<"Please enter a number greater than zero: ";
            cin>>wages[num];
        }
        cout<<endl;
        wages[num]=hours[num]*wages[num];
    }
    
    //Output values
    cout<<"Payroll Report:"<<endl;
    cout<<"Employee ID:        Total Wages:"<<endl;
    cout<<"--------------------------------"<<endl;
    for(int i=0;i<=SIZE-1;i++){
        cout<<empId[i]<<"              "<<fixed<<setprecision(2)<<wages[i]
                <<endl;
    }

    //Exit stage right!
    return 0;
}