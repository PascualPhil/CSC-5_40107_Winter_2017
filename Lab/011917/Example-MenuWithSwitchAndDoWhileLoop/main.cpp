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

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;       //Choice of program to view
    
    //Loop on the menu
    do{
        //Input values
        cout<<"Please select a program from the list."<<endl;
        cout<<"Type 1 for Problem with Do-While"<<endl;
        cout<<"Type 2 for Problem with While"<<endl;
        cout<<"Type 3 for Problem with For"<<endl;
        cin>>choice;

        //Switch to determine the problem
        switch(choice){
            case '1':{
                cout<<"We are in Problem 1"<<endl;
                break;
            }
            case '2':{
                cout<<"We are in Problem 2"<<endl;
                break;
            }
            case '3':{
                cout<<"We are in Problem 3"<<endl;
                break;
            }
                default:
                    cout<<"You are exiting the program."<<endl;
        }
        cout<<endl;
    }while(choice>='1'&&choice<='3');
    

    //Exit stage right!
    return 0;
}