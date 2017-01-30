/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 30, 2017, 12:20 PM
  Purpose:  Collatz Conjecture Series Program
 */

//System Libraries
#include <iostream>
#include <cstring>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
int series(int);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int num;//Number to start the series and counter
    //Input values
    cout<<"This program will calculate and print the Collatz Conjecture series"<<endl;
    cout<<"based on a number entered by the user.  Please enter the required"<<endl;
    cout<<"information when required."<<endl;
    cout<<endl;
    cout<<"Please enter a number: ";//Number that starts the series
    cin>>num;
    cout<<endl;
    //Function to perform and display series calculations
    series(num);
    
    //Exit stage right!
    return 0;
}
//******************************************************************************
//                         Collatz Conjecture Function
//If number is even, divides number by two and outputs new number
//If number is odd, multiplies number by three, adds one, and outputs new number
//******************************************************************************
int series(int number){
    //Declare variables
    const int SIZE=1000;//Constant integer declaring size of array
    int array[SIZE]={};//Initialize array
    int count=1;//Initialize count
    array[0]=number;
    do{//Loop that calculates series and stores in array so long as number !=1
        count++;
        if(number%2==0){
            number/=2;//If number is even, divide number by two
            //array[count-1]=number;
        }
        else{
            number=(number*3)+1;//If number is odd, multiply number by 3 and add
                                //1
            
        }
        array[count-1]=number;
    }while(number!=1);
    
    for(int count=0;count<SIZE;count++){//Displays array from first position
        cout<<array[count]<<" ";
        if(array[count]==1) break;//Stops display of array when number=1
    }
    cout<<endl;
    cout<<"The number of elements in this series is "<<count;

    return 0;
}