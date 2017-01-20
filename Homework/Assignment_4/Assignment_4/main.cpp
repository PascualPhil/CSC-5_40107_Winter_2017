/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 19, 2017, 10:30 PM
  Purpose:  Menu with functions for Assignment 4
 */

//System Libraries
#include <iostream>
#include <cstdlib>      //For srand seed
#include <ctime>        //Time library
#include <iomanip>      //Format library
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const int PERCENT=100; //Constant integer for percentage conversion

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


//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;       //Choice of program to view
    //Output
    cout<<"This is a program designed to display 9 problems from Assignment 4."<<endl;
    cout<<endl;
    //Loop on the menu
    do{
        //Input values
        cout<<"Please select a program from the list."<<endl;
        cout<<"Type 1 for Sum of Numbers"<<endl;
        cout<<"Type 2 for Ocean Levels"<<endl;
        cout<<"Type 3 for Membership Fees Increase"<<endl;
        cout<<"Type 4 for Pennies For Play"<<endl;
        cout<<"Type 5 for Hotel Occupancy"<<endl;
        cout<<"Type 6 for Population"<<endl;
        cout<<"Type 7 for The Greatest and Least of These"<<endl;
        cout<<"Type 8 for Payroll Report"<<endl;
        cout<<"Type 9 for Budget Analysis"<<endl;
        
        cin>>choice;

        //Switch to determine the problem
        switch(choice){
            case '1':{prob1();break;}
            case '2':{prob2();break;}
            case '3':{prob3();break;}
            case '4':{prob4();break;}
            case '5':{prob5();break;}
            case '6':{prob6();break;}
            case '7':{prob7();break;}
            case '8':{prob8();break;}
            case '9':{prob9();break;}
            default:{
                cout<<"You are exiting the program."<<endl;
            }
        }
        cout<<endl;
    }while(choice>='1'&&choice<='9');
    

    //Exit stage right!
    return 0;
}

//123456789012345678901234567901234567901234567890123456789012345678901234567890
//***************************** Problem 1 **************************************
//Description:  Sum of Numbers program
//Inputs:   int - user-defined end of number series with validation
//Outputs:  in - sum of number series
//******************************************************************************
void prob1(){
    //Declare Variables
    int total,          //Total sum
        endNum;         //User-defined end of number series
    
    //Input values
    cout<<"This program will calculate the sum of a series of numbers from 1 to a "
            "user defined ending number."<<endl;
    cout<<"Please enter a number greater than zero: ";
    cin>>endNum;
    
    //While loop for input validation
    while (endNum<=0){
    cout<<"Please enter a number greater than zero: ";
    cin>>endNum;
    }
    
    //Loop that adds series
    for (int count=1; count<=endNum; count++)
        total+=count;    //Accumulate running total from 1 through end of number series
    cout<<"The sum of the series 1 through "<<endNum<<" is "<<total<<".";
    cout<<endl;
}
//123456789012345678901234567901234567901234567890123456789012345678901234567890
//***************************** Problem 2 **************************************
//Description:  Ocean levels calculator
//Inputs:   Number of years, rise increment
//Outputs:  Sea level rise
//******************************************************************************
void prob2(){
    //Declare Variables
    unsigned short numYrs=25;       //Number of years to be calculated
    float incrmnt=1.5;              //Increment of sea level rise per year
    float seaLvl;                   //Sea level rise
    
    //Initial heading output
    cout<<"This program will calculate the level of sea level rise over the next"<<endl;
    cout<<"25 years, if the sea level rises at a rate of 1.5mm per year."<<endl;
    cout<<endl;
    
    //Loop to calculate sea level rise and display table
    cout<<"Years:"<<"   Sea Level Rise:"<<endl;
    cout<<"------"<<"   ---------------"<<endl;
    for(int yrs=1;yrs<=numYrs;yrs++){
        seaLvl=yrs*incrmnt;
        cout<<right<<setw(6)<<yrs<<fixed<<setw(16)<<setprecision(2)<<seaLvl<<"mm"<<endl;

    }
    cout<<endl;
}
//123456789012345678901234567901234567901234567890123456789012345678901234567890
//***************************** Problem 3 **************************************
//Description:  Membership fee increase calculator
//Inputs:   Initial fee, years to calculate, fee increase
//Outputs:  Rate from year to year
//******************************************************************************
void prob3(){
    //Declare Variables
    float rate=2500.00,          //Initial membership fee
          numYrs=6;           //Number of years to calculate
    float feeIncr=4;          //Membership fee increase
    //Output of initial headers and table information
    cout<<"This program will calculate the new membership fees for a country club"<<endl;
    cout<<"for the next six years, with an initial membership fee of $2500 at a rate of increase of 4% per year."<<endl;
    cout<<endl;
    cout<<"Years:     New rate:"<<endl;
    cout<<"------     ---------"<<endl;
    //Loop to calculate new membership fees and display data
    for (int yrs=1;yrs<=numYrs;yrs++){
        rate=rate+(rate*(feeIncr/PERCENT));
    cout<<setw(6)<<right<<yrs<<"     $"<<setw(8)<<right<<fixed<<setprecision(2)<<rate<<endl;
    }
    cout<<endl;
}
//123456789012345678901234567901234567901234567890123456789012345678901234567890
//***************************** Problem 4 **************************************
//Description:  Pennies for Pay Salary Calculator
//Inputs:   Number of days
//Outputs:  Daily and total salary
//******************************************************************************
void prob4(){
    //Declare Variables
    int days,               //Days to be calculated
        pennies=1,            //Number of pennies
        total=0;            //Total pay in period
    
    //Input values
    cout<<"This program will calculate how much a person would earn over a period of time"<<endl;
    cout<<"if his/her salary starts at one penny and doubles each day the person works.  Please"<<endl;
    cout<<"enter required information when prompted."<<endl;
    cout<<endl;
    cout<<"Please enter the number of days worked: ";
    cin>>days;
    while(days>30){
        cout<<"Please enter a number of days less than 30: ";
        cin>>days;
    }
    //Output for table headers
    cout<<"Days:"<<"         Salary:"<<endl;
    cout<<"-----"<<"         -------"<<endl;
    
    //Loop to calculate salary and accumulate total
    for(int calcDay=1;calcDay<=days;calcDay++,pennies*=2){
        total+=pennies;
        cout<<setw(5)<<right<<calcDay<<"     $"<<setw(10)<<right<<fixed<<setprecision(2)<<(pennies/100.0)<<endl;
    }
    
    //Output values
    cout<<endl;
    cout<<"Total pay: $"<<fixed<<setprecision(2)<<(total/100.0)<<endl;
    cout<<endl;
}
//123456789012345678901234567901234567901234567890123456789012345678901234567890
//***************************** Problem 5 **************************************
//Description:  Hotel Occupancy Calculator
//Inputs:   Number of floors, rooms/floor, occupied rooms
//Outputs:  Total occupied/unoccupied rooms, occupancy rate
//******************************************************************************
void prob5(){
    //Declare Variables
    int floors,                 //Number of floors
        roomsFl,                //Rooms per floor
        totRms,                 //Total rooms
        occRms;                 //Occupied rooms per floor
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
            roomsFl+=roomsFl;    //Total rooms accumulator
            //Loop for input validation for rooms per floor
            while(roomsFl<10){
                cout<<"Please enter a number greater than 10: ";
                cin>>roomsFl;
            }
            cout<<"Please enter the number of rooms occupied on Floor "<<flrNum<<": ";
            cin>>occRms;
            occRms+=occRms;     //Occupied rooms accumulator    
            //Loop to validate that rooms occupied less than/equal to rooms per floor
            while(occRms>roomsFl){
                cout<<"Please ensure # of rooms occupied less than or equal to # of rooms"<<endl;
                cout<<"on Floor "<<flrNum<<": ";
                cin>>occRms;
            }     
    }
            //Occupancy percentage calculator
            prcOcc=(float)occRms/roomsFl;
    //Output values
    cout<<"Total number of rooms: "<<roomsFl<<endl;
    cout<<"Rooms occupied: "<<occRms<<endl;
    cout<<"Rooms unoccupied: "<<roomsFl-occRms<<endl;
    cout<<"Occupancy Percentage: "<<fixed<<setprecision(2)<<prcOcc*100<<"%"<<endl;
    cout<<endl;
}
//123456789012345678901234567901234567901234567890123456789012345678901234567890
//***************************** Problem 6 **************************************
//Description:  Population growth calculator
//Inputs:   Days of growth, initial population, growth rate
//Outputs:  Daily population
//******************************************************************************
void prob6(){
    //Declare Variables
    float days,       //Days of population growth to be calculated
        pop;        //Population
    float rate;     //Growth rate
    
    //Input values
    cout<<"This program will calculate growth of a population based on the growth rate,"<<endl;
    cout<<"initial population, and days of growth input by the user.  Please enter all"<<endl;
    cout<<"required information when prompted."<<endl;
    cout<<endl;
    
    //Loop to obtain days and validate input
    cout<<"Please enter the number of days of population growth to be calculated: ";
    cin>>days;
    while(days<=0){
        cout<<"Please enter a number greater than zero: ";
        cin>>days;
    }
    
    //Loop to obtain population and validate input
    cout<<"Please enter the initial population: ";
    cin>>pop;
    while(pop<2){
        cout<<"Please enter an initial population greater than 2: ";
        cin>>pop;
    }
    
    //Loop to obtain growth rate and validate input
    cout<<"Please enter the growth rate in percent: ";
    cin>>rate;
    while(rate<0){
        cout<<"Please enter a positive growth rate: ";
        cin>>rate;
    }
    //Output table headers
    cout<<endl;
    cout<<"Days:     "<<"Population:"<<endl;
    cout<<"-----     "<<"-----------"<<endl;
    //Loop to calculate population growth
    for(int calcDay=1;calcDay<=days;calcDay++){
        pop=pop+(pop*(rate/100.0));
        cout<<setw(5)<<right<<calcDay<<"     "<<setw(11)<<right<<fixed<<setprecision(2)<<pop<<endl;
    }
    cout<<endl;
}
//123456789012345678901234567901234567901234567890123456789012345678901234567890
//***************************** Problem 7 **************************************
//Description:  Minimum/Maximum sorter
//Inputs:   User defined integers
//Outputs:  Minimum and maximum from series entered
//******************************************************************************
void prob7(){
    //Declare Variables
    int number=0,             //Input number
        max,           //Maximum number
        min;           //Minimum number
    
    //Input values
    cout<<"This program will determine the maximum and minimum numbers from a set"<<endl;
    cout<<"of user-defined integers.  Please enter required information when prompted."<<endl;
    cout<<endl;
    bool first = true;
    while(number!=-99){
        cout<<"Please enter an integer, enter -99 when done: ";
        cin>>number;
        //Boolean to set min and max to first number entered
        if (first){ max = min = number; first=false;}
        if (number!= -99){        
            //Finding minimum and maximum numbers
            if(number<min ){//&& number!=-99)
                min=number;
            }
            if(number>max){
                max=number;
            }
        }
        
    } //end while loop
    
    //Output values
    cout<<"The minimum number entered is "<<min<<endl;
    cout<<"The maximum number entered is "<<max<<endl;
    cout<<endl;
}
//123456789012345678901234567901234567901234567890123456789012345678901234567890
//***************************** Problem 8 **************************************
//Description:  Payroll report generator
//Inputs:   Employee number, federal, state, FICA taxes, gross pay
//Outputs:  Total federal, state, FICA taxes, net pay
//******************************************************************************
void prob8(){
    //Declare Variables
    unsigned int empNum=1;        //Employee number
    float        grossPay=0,      //Gross pay
                 stateTax=0,      //State tax
                 fedrlTax=0,      //Federal tax
                 ficaTax=0,       //FICA tax
                 netPay;          //Net pay
    
    //Input values
    cout<<"This program will generate a payroll report displaying totals for gross"<<endl;
    cout<<"pay, and state, federal, and FICA taxes.  Please enter required information"<<endl;
    cout<<"when prompted."<<endl;
    cout<<endl;

    //Loops to obtain and accumulate information
    while(empNum!=0){
        cout<<"****Please enter employee number, enter a 0 if done: ";
        cin>>empNum;
        if(empNum!=0){
            float empGross=0,
              empState=0,
              empFedrl=0,
              empFica=0;
        cout<<"Enter the gross pay for Employee "<<empNum<<": $";
        cin>>empGross;
        cout<<"Enter the Federal Tax Withholding for Employee "<<empNum<<": $";
        cin>>empFedrl;
        cout<<"Enter the State Tax Withholding for Employee "<<empNum<<": $";
        cin>>empState;
        cout<<"Enter the FICA Withholding for Employee "<<empNum<<": $";
        cin>>empFica;
        grossPay+=empGross;
        fedrlTax+=empFedrl;
        stateTax+=empState;
        ficaTax+=empFica;
        netPay=grossPay-(fedrlTax+stateTax+ficaTax);
        cout<<endl;
        }
    }
    cout<<endl;
    //Output values
    cout<<"Payroll Report:"<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"Total Gross Pay:           $"<<setw(10)<<right<<fixed<<setprecision(2)<<grossPay<<endl;
    cout<<"Total Federal Withholding: $"<<setw(10)<<right<<fixed<<setprecision(2)<<fedrlTax<<endl;
    cout<<"Total State Withholding:   $"<<setw(10)<<right<<fixed<<setprecision(2)<<stateTax<<endl;
    cout<<"Total FICA Withholding:    $"<<setw(10)<<right<<fixed<<setprecision(2)<<ficaTax<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"Total Net Pay:             $"<<setw(10)<<right<<fixed<<setprecision(2)<<static_cast<float>(netPay)<<endl;
    cout<<endl;
}
//123456789012345678901234567901234567901234567890123456789012345678901234567890
//***************************** Problem 9 **************************************
//Description:  Budget analysis program
//Inputs:   Monthly budget, expenses
//Outputs:  Total expenses, surplus/deficit
//******************************************************************************
void prob9(){
    //Declare Variables
    float budget,       //Monthly budget
          expense=1,      //Expenses
          total=0;      //Expense accumulator
    
    //Initial output values
    cout<<"This program will determine if an individual is under or over their monthly"<<endl;
    cout<<"budget based on inputs of budget amount and expenses.  Please enter required"<<endl;
    cout<<"information when prompted."<<endl;
    cout<<endl;
    
    //Input value
    cout<<"Please enter monthly budget: $";
    cin>>budget;
    
    //Loop to obtain and accumulate expenses
    while(expense!=0){
        cout<<"Enter an expense, enter 0 when done: $";
        cin>>expense;
        if(expense!=0){
        cout<<endl;
        total+=expense;
        cout<<"Total expenses so far: $"<<total<<endl;
        }
    }
    //Output values
    cout<<endl;
    cout<<"Monthly budget:     $"<<fixed<<setprecision(2)<<budget<<endl;
    cout<<"Monthly expenses:   $"<<fixed<<setprecision(2)<<total<<endl;
    cout<<"Surplus/Deficit:    $"<<fixed<<setprecision(2)<<budget-total<<endl;
    cout<<endl;
}