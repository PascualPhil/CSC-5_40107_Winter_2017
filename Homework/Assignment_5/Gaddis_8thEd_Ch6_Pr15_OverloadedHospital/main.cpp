/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on February 2, 2017, 11:50 AM
  Purpose:  Hospital charges calculator
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
void hosBill(int,int,int,int);//Hospital bill for inpatient stay
void hosBill(int,int);//Hospital bill for outpatient stay

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int numDays,//Number of days spent in hospital
        dRate,//Daily rate for being admitted
        medChrg,//Medication charges
        servcs;//Charges for other services
    int patient;
    
    //Input values
    cout<<"This program will calculate a hospital bill for a patient depending"<<endl;
    cout<<"on whether if the stay was in-patient or out-patient.  Please enter"<<endl;
    cout<<"all information when prompted."<<endl;
    cout<<endl;
    cout<<"Please enter 1 if in-patient, 2 if out-patient: ";
    cin>>patient;
    while(patient!=1&&patient!=2){
        cout<<"Please enter a 1 or 2: ";
        cin>>patient;
    }
    
    //Process by mapping inputs to outputs
    if (patient==1){
        hosBill(numDays,dRate,medChrg,servcs);
    }
    else{
        hosBill(servcs,medChrg);
    }
    //Output values

    //Exit stage right!
    return 0;
}

//******************************************************************************
//                      Inpatient Stay Calculator
//Description: Calculates cost of hospital stay for inpatient procedures
//Input: Number of days in hospital, daily admission rate, medication charges,
//       charges for other services
//Output: Total charges for hospital stay
//******************************************************************************
void hosBill(int numDays,int dRate,int medChrg,int servcs){
    int total;//Total hospital charges
    cout<<"Please enter the number of days patient was admitted: ";
    cin>>numDays;
    while(numDays<=0){
        cout<<"Please enter a number greater than zero: ";
        cin>>numDays;
    }
    cout<<"Please enter the daily rate for admission in whole dollars: $";
    cin>>dRate;
    while(dRate<=0){
        cout<<"Please enter a number greater than zero: $";
        cin>>dRate;
    }
    cout<<"Please enter the total medication charges for the patient in"
            " whole dollars: $";
    cin>>medChrg;
    while(medChrg<=0){
        cout<<"Please enter a number greater than zero: $";
        cin>>medChrg;
    }
    cout<<"Please enter any other patient charges in whole dollars: $";
    cin>>servcs;
    while(servcs<=0){
        cout<<"Please enter a number greater than zero: $";
        cin>>servcs;
    }
    total=(numDays*dRate)+medChrg+servcs;
    cout<<"The total charges for the patient for his/her inpatient stay are $"
            <<total<<endl;
}

//******************************************************************************
//                      Outpatient Stay Calculator
//Description: Calculates cost of hospital stay for outpatient procedures
//Input: Medication charges, charges for other services
//Output: Total charges for outpatient stay
//******************************************************************************
void hosBill(int servcs, int medChrg){
    int total;//Total hospital charges
    cout<<"Please enter any patient charges in whole dollars: $";
    cin>>servcs;
    while(servcs<=0){
        cout<<"Please enter a number greater than zero: $";
        cin>>servcs;
    }
    cout<<"Please enter the total medication charges for the patient in"
            " whole dollars: $";
    cin>>medChrg;
    while(medChrg<=0){
        cout<<"Please enter a number greater than zero: $";
        cin>>medChrg;
    }
    total=servcs+medChrg;
    cout<<"The total charges for the patient for his/her outpatient stay are $"
            <<total<<endl;
}