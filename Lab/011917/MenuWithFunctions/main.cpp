/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 17, 2017, 12:15 PM
  Purpose:  Example menu to be used in homework
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

//Function Prototypes
void prob1();
void prob2();
void prob3();

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;       //Choice of program to view
    
    //Loop on the menu
    do{
        //Input values
        cout<<"Please select a program from the list."<<endl;
        cout<<"Type 1 for Problem 1"<<endl;
        cout<<"Type 2 for Problem 2"<<endl;
        cout<<"Type 3 for Problem 3"<<endl;
        cin>>choice;

        //Switch to determine the problem
        switch(choice){
            case '1':{prob1();break;}
            case '2':{prob2();break;}
            case '3':{prob3();break;}
            default:{
                cout<<"You are exiting the program."<<endl;
            }
        }
        cout<<endl;
    }while(choice>='1'&&choice<='3');
    

    //Exit stage right!
    return 0;
}

//123456789012345678901234567901234567901234567890123456789012345678901234567890
//***************************** Problem 1 **************************************
//Description:  What is the process, i.e. mapping from inputs to outputs
//Inputs:   Datatype, Range/validity, Units, Description
//Outputs:  Datatype, Range/validity, Units, Description
//******************************************************************************
void prob1(){
    cout<<"We are in Problem 1"<<endl;
}
//123456789012345678901234567901234567901234567890123456789012345678901234567890
//***************************** Problem 2 **************************************
//Description:  What is the process, i.e. mapping from inputs to outputs
//Inputs:   Datatype, Range/validity, Units, Description
//Outputs:  Datatype, Range/validity, Units, Description
//******************************************************************************
void prob2(){
    cout<<"We are in Problem 2"<<endl;
}
//123456789012345678901234567901234567901234567890123456789012345678901234567890
//***************************** Problem 3 **************************************
//Description:  What is the process, i.e. mapping from inputs to outputs
//Inputs:   Datatype, Range/validity, Units, Description
//Outputs:  Datatype, Range/validity, Units, Description
//******************************************************************************
void prob3(){
    cout<<"We are in Problem 3"<<endl;
}