/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 19, 2017, 12:00 PM
  Purpose:  The Greatest and Least of These
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

//Executable code begins here!!!
int main(int argc, char** argv) {
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
    
    //Exit stage right!
    return 0;
}