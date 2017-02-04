/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on February 2, 2017, 6:30 PM
  Purpose:  Menu for Gaddis Chapter 6 Problems
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const float PERCENT=100.0f;    //Constant percentage converter

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
void calcRet(float,float);//Retail markup calculator
void fallDist(int);//Function to calculate falling distance
void coinTos(int);//Prototype for coin toss simulator
void presVal(int,float,int);//Function prototype for present value function
void futVal(int,float,int);//Future value calculator
int emps();//Function for number of employees
int totAbs(int);//Function for total absence days
float avgAbs(int,int);//Function for average number of days employees absent
void hosBill(int,int,int,int);//Hospital bill for inpatient stay
void hosBill(int,int);//Hospital bill for outpatient stay
void popCalc(int,float,float,int);//Function prototype for population
                                  //calculator
void isPrime();//Prime number calculator


//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int num;//Problem number
    char response;
    
    //Input values
    cout<<"This program will display all 9 problems from Gaddis 8th Edition"<<endl;
    cout<<"Chapter 6 that have been completed.  Please select the appropriate"<<endl;
    cout<<"problem from the list below."<<endl;
    do{
    //Process by mapping inputs to outputs
        cout<<"Please select a program from the list."<<endl;
        cout<<"Type 1 for Markup"<<endl;
        cout<<"Type 2 for Falling Distance"<<endl;
        cout<<"Type 3 for Coin Toss"<<endl;
        cout<<"Type 4 for Present Value"<<endl;
        cout<<"Type 5 for Future Value"<<endl;
        cout<<"Type 6 for Days Out"<<endl;
        cout<<"Type 7 for Overloaded Hospital"<<endl;
        cout<<"Type 8 for Population"<<endl;
        cout<<"Type 9 for isPrime"<<endl;        
        cout<<"Please enter the problem number you wish to view: ";
        cin>>num;
        while(num<1||num>9){
            cout<<"Please select a number 1-9: ";
            cin>>num;
        }
        cout<<endl;
        switch(num){
            case 1:prob1();break;
            case 2:prob2();break;
            case 3:prob3();break;
            case 4:prob4();break;
            case 5:prob5();break;
            case 6:prob6();break;
            case 7:prob7();break;
            case 8:prob8();break;
            case 9:prob9();break;
        }
        cout<<"Do you wish to continue viewing problems (Y/N)? ";
        cin>>response;
        while(response!='Y'&&response!='y'&&response!='N'&&response!='n'){
            cout<<"Please select response Y or N: ";
            cin.ignore();
            cin>>response;
        }
    }while(response=='Y'||response=='y');
    //Output values

    //Exit stage right!
    return 0;
}


//******************************************************************************
//                      Problem 1 - Markup
//******************************************************************************
void prob1(){
    //Declare Variables
    float whlsale,      //Wholesale price
          markUp;       //Markup

    //Program description
    cout<<"This program will determine the retail price of an item based on its"<<endl;
    cout<<"wholesale price and the percent markup.  Please enter the required"<<endl;
    cout<<"information when prompted."<<endl;
    
    //Initial inputs with input validation loops
    cout<<endl;
    cout<<"Please enter the wholesale price of the item: $";
    cin>>whlsale;
    while(whlsale<0){
        cout<<"Please enter a positive dollar amount: $";
        cin>>whlsale;
    }
    cout<<"Please enter the markup percentage: ";
    cin>>markUp;
    while(markUp<0){
        cout<<"Please enter a positive percentage: ";
        cin>>markUp;
    }
    cout<<endl;  
    
    //Function call
    calcRet(whlsale,markUp);
}

//******************************************************************************
//Definition of function calcRet:  Determines retail price by multiplying retail
//markup percentage by wholesale price, and adding to wholesale price.
//******************************************************************************
void calcRet(float whlsale, float markUp){
    float retPrc;
    retPrc=whlsale+(whlsale*markUp/PERCENT);
    cout<<"The retail price for the item is: $"<<fixed<<setprecision(2)<<retPrc<<endl;
}

//******************************************************************************
//                      Problem 2 - Falling Distance
//******************************************************************************
void prob2(){
    //Declare Variables
    int t=10;//Time in seconds
    
    //Input values
    cout<<"This program will calculate the distance an object has fallen"<<endl;
    cout<<"based on how long the object has fallen for in seconds.  This"<<endl;
    cout<<"program will display how far an object has fallen in meters"<<endl;
    cout<<"for up to 10 seconds."<<endl;
    cout<<endl;
    
    //Process by mapping inputs to outputs
    fallDist(t);
}

//******************************************************************************
//                         Fall Distance Calculator
//Description: Calculates distance fallen based on time falling in seconds
//Input: Time in seconds
//Output: Distance fallen in meters
//******************************************************************************
void fallDist(int t){
    cout<<"Seconds   Distance"<<endl;
    for(int time=1;time<=t;time++){
        float d,g=9.8f;
        d=(.5)*g*(time*time);
        cout<<setw(2)<<time<<"sec       "<<setw(5)<<fixed<<setprecision(1)<<d<<
                "m"<<endl;
    }
}

//******************************************************************************
//                      Problem 3 - Coin Toss
//******************************************************************************
void prob3(){
    //Set RNG seed
    srand(static_cast<int>(time(0)));
    //Declare Variables
    int times;//Number of times coin to be tossed
    
    //Input values
    cout<<"This program will simulate a coin toss for a user-defined number"<<endl;
    cout<<"of throws.  Please enter required information when prompted."<<endl;
    cout<<endl;
    cout<<"Please enter number of throws to be simulated: ";
    cin>>times;
    
    //Process by mapping inputs to outputs
    coinTos(times);
}

//******************************************************************************
//                              Coin Toss Simulator
//Description: Will simulate a coin toss up to the user-defined number of
//             throws
//Input: Number of times to toss coin
//Output: Result of coin toss (heads or tails)
//******************************************************************************
void coinTos(int times){
    int toss;
    cout<<"Throw      Result"<<endl;
    for (int t=1;t<=times;t++){
        toss=rand()%2+1;//Generates random number between 1-2
        if(toss==1){
            cout<<setw(3)<<t<<"         Heads"<<endl;
        }
        else cout<<setw(3)<<t<<"         Tails"<<endl;
    }
}

//******************************************************************************
//                      Problem 4 - Present Value
//******************************************************************************
void prob4(){
    //Declare Variables
    int futVal,nYears;//Future value and number of years
    float inRate;//Interest rate in percent
    
    //Input values
    cout<<"This program will determine the amount of funds needed to deposit"<<endl;
    cout<<"into an account if the user wanted to have a desired amount of funds"<<endl;
    cout<<"available after a number of years.  Please enter all required"<<endl;
    cout<<"information when prompted."<<endl;
    cout<<endl;
    cout<<"Please enter the amount you wish to end up with: $";
    cin>>futVal;
    cout<<"Please enter the number of years you wish to save the money: ";
    cin>>nYears;
    cout<<"Please enter the interest rate of the savings account: ";
    cin>>inRate;
    cout<<endl;
    //Process by mapping inputs to outputs
    presVal(futVal,inRate,nYears);
}

//******************************************************************************
//                          Present Value Calculator
//Description: Determines initial deposit based on final amount user wishes to
//             have, how long user wishes to save, and interest rate of account
//Input: Final value of account, number of years to save, account interest rate
//Output: Initial deposit required to achieve final value
//******************************************************************************
void presVal(int futVal,float inRate,int nYears){
    float pv;//Initial deposit required
    pv=futVal/pow(1+(inRate/PERCENT),nYears);
    cout<<"The initial deposit required to have $"<<futVal<<" after "<<nYears<<
            " years is: $"<<fixed<<setprecision(2)<<pv<<endl;
}

//******************************************************************************
//                      Problem 5 - Future Value
//******************************************************************************
void prob5(){
    //Declare Variables
    float intRate;
    int  initVal,nMonths;
    
    //Input values
    cout<<"This program will calculate the future value of a savings account"<<endl;
    cout<<"based on the initial deposit, interest rate, and number of months"<<endl;
    cout<<"the account is left to accrue interest.  Please enter all required"<<endl;
    cout<<"information when required."<<endl;
    cout<<endl;
    cout<<"Please enter the initial deposit in whole dollars: $";
    cin>>initVal;
    cout<<"Please enter the interest rate in percent: ";
    cin>>intRate;
    cout<<"Please enter the number of months the deposit will accrue interest: ";
    cin>>nMonths;
    
    //Process by mapping inputs to outputs
    futVal(initVal,intRate,nMonths);
}

//******************************************************************************
//                          Future Value Calculator
//Description: Will calculate the final value of a deposit based on interest 
//             rate and number of months initial deposit left to accrue interest
//Input: Initial deposit, interest rate, number of months
//Output: Final value of deposit
//******************************************************************************
void futVal(int initVal,float intRate,int nMonths){
    float finVal;//Final value
    finVal=initVal*(pow(1+(intRate/PERCENT),nMonths));
    cout<<"The final value of the account after "<<nMonths<<" months is: $"<<
            fixed<<setprecision(2)<<finVal<<endl;
}

//******************************************************************************
//                      Problem 6 - Days Out
//******************************************************************************
void prob6(){
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

//******************************************************************************
//                      Problem 7 - Overloaded Hospital
//******************************************************************************
void prob7(){
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

//******************************************************************************
//                      Problem 8 - Population
//******************************************************************************
void prob8(){
    //Declare Variables
    int popInit,//Initial population
        nYears;//Number of years to calculate
    float bRate,//Birth rate in percent
          dRate;//Death rate in percent
    
    //Input values
    cout<<"This program will calculate a population's size after a user-defined"<<endl;
    cout<<"number of years based on initial population, birth, and death rates."<<endl;
    cout<<"Please enter all required information when requested."<<endl;
    cout<<endl;
    
    //Process by mapping inputs to outputs
    popCalc(popInit,bRate,dRate,nYears);
}

//******************************************************************************
//                          Population Calculator
//Description: Will calculate and display yearly increase/decrease in population
//Input: Initial population size, birth rate, death rate, number of years
//Output: Population after year
//******************************************************************************
void popCalc(int popInit,float bRate,float dRate,int nYears){
    int total=0;//Total population
    cout<<"Please enter the initial population: ";
    cin>>popInit;
    while(popInit<2){
        cout<<"Please enter an initial population size greater than 2: ";
        cin>>popInit;
    }
    cout<<"Please enter the birth rate in percent: ";
    cin>>bRate;
    while(bRate<0){
        cout<<"Please enter a number greater than zero: ";
        cin>>bRate;
    }
    cout<<"Please enter the death rate in percent: ";
    cin>>dRate;
    while(dRate<0){
        cout<<"Please enter a number greater than zero: ";
        cin>>dRate;
    }
    cout<<"Please enter the number of years to display: ";
    cin>>nYears;
    while(nYears<1){
        cout<<"Please enter a number greater than or equal to 1: ";
        cin>>nYears;
    }
    cout<<"Year     Population"<<endl;
    for (int years=1;years<=nYears;years++){
        popInit=popInit+((bRate/PERCENT)*popInit)-((dRate/PERCENT)*popInit);
        cout<<setw(4)<<years<<"       "<<setw(8)<<static_cast<int>(popInit)<<endl;
    }
}

//******************************************************************************
//                      Problem 9 - isPrime
//******************************************************************************
void prob9(){
    //Input values
    cout<<"This program will determine if an integer entered by the"<<endl;
    cout<<"user is a prime number or not.  Please enter all required information"<<endl;
    cout<<"when requested."<<endl;
    cout<<endl;
    
    //Process by mapping inputs to outputs
    isPrime();
}

//******************************************************************************
//                          Prime Number Calculator
//Description: Determines if a user-entered integer is a prime number
//Input: Integer
//Output: True/False
//******************************************************************************
void isPrime(){
    int num;
    cout<<"Please enter a whole integer: ";
    cin>>num;
    bool prime=true;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            prime=false;
            break;
        }
    }
    if(prime){
        cout<<"This is a prime number.";
    }
    else{
        cout<<"This is not a prime number.";
    }
    cout<<endl;
}