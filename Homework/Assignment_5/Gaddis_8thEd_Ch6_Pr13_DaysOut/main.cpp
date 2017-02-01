/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on February 1, 2017, 1:00 PM
  Purpose:  Employee absence calculator
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
int emps();//Function for number of employees
int totAbs(int);//Function for total absence days
float avgAbs(int,int);//Function for average number of days employees absent

//Executable code begins here!!!
int main(int argc, char** argv) {  
    //Declare Variables

    
    //Input values
    cout<<"This program will calculate the total and average number of days"<<endl;
    cout<<"employees of a company are absent for the year.  Please enter"<<endl;
    cout<<"all required information when requested."<<endl;
    cout<<endl;
    //Process by mapping inputs to outputs
    int numEmps = emps();
    int total = totAbs(numEmps);
    
    
    //Output values
    cout<<"The average number of absences is : "<<avgAbs(numEmps,total)<<" days"
            " per employee"<<endl;
    //Exit stage right!
    return 0;
}

//******************************************************************************
//                          Number of Employees Function
//Description: Obtains number of employees in company
//Input: Number of employees
//Output: None
//******************************************************************************
int emps(){
    int numEmps;//Number of employees
    cout<<"Please enter the number of employees in the company: ";
    cin>>numEmps;
    while(numEmps<=0){
        cout<<"Please enter a number greater than 0: ";
        cin>>numEmps;
    }
    return numEmps;
}

//******************************************************************************
//                          Total Absences Calculator
//Description: Asks for number of absences for each employee entered in emps
//             function
//Input: Number of absences for each individual employee
//Output: Total number of absences
//******************************************************************************
int totAbs(int numEmps){
    int totAbs=0;//Accumulated number of absences
    int input;
    for(int num=1;num<=numEmps;num++){
        cout<<"Please enter the number of absences for employee "<<num<<": ";
        cin>>input;
        while(input<=0){
            cout<<"Please enter a positive number: ";
            cin>>input;
        }
        totAbs+=input;
    }
    return totAbs;
}

//******************************************************************************
//                          Average absences calculator
//Description: Will calculate the average number of absences based on the total
//             number of absences and number of employees obtained in previous
//             functions.
//Input: numEmps and accAbs
//Output: Average number of absences
//******************************************************************************
float avgAbs(int numEmps,int total){
     return total/static_cast<float>(numEmps);
    
}