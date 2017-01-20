/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 19, 2017, 11:00 PM
  Purpose:  Budget analysis program
 */

//System Libraries
#include <iostream>
#include <iomanip>      //For setw and setprecision
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
    float budget,       //Monthly budget
          expense,      //Expenses
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
    //Exit stage right!
    return 0;
}