/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on February 2, 2017, 1:30 PM
  Purpose:  Value sorter in array
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
    const int SIZE=9;//Creates size of array
    int num[SIZE],min,max;
    
    //Input values
    cout<<"This program will find the minimum and maximum numbers that were"<<endl;
    cout<<"entered into an array.  Please enter the required information"<<endl;
    cout<<"when prompted."<<endl;
    cout<<endl;
    for (int i=0;i<=SIZE;i++){
        cout<<"Please enter value "<<(i+1)<<": ";
        cin>>num[i];
    }
    //Process by mapping inputs to outputs
    min=num[0];
    max=num[0];
    for (int f=0;f<=SIZE;f++){
        if (max<num[f]){
            max=num[f];
        }
        else num[f]<min?:num[f]=min;
    }
    
    //Output values
    cout<<"The maximum number in the array is "<<max<<endl;
    cout<<"The minimum number in the array is "<<min<<endl;
    //Exit stage right!
    return 0;
}