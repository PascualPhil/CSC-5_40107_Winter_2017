/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on February 4, 2017, 12:50 PM
  Purpose:  Larger Than N
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
void larger(int,int [],int);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set RNG seed
    srand(static_cast<int>(time(0)));
    //Declare Variables
    int size;//Array size
    int numbers[size];//Array
    int n;
    //Input values
    cout<<"This program contains a function that will fill an array with"<<endl;
    cout<<"random numbers and output all numbers greater than a user-defined n"
            <<endl;
    cout<<"Please enter all required information when requested."<<endl;
    
    //Process by mapping inputs to outputs
    larger(size,numbers,n);
    //Output values

    //Exit stage right!
    return 0;
}

//******************************************************************************
//                          Function: larger
//Description: Obtains size of array and number n, fills array with random
//             numbers and ouputs all numbers larger than n.
//Input: Array size, n
//Output: Numbers in array larger than n
//******************************************************************************
void larger(int size,int numbers[],int n){
    cout<<"Please enter the size of the array: ";
    cin>>size;
    cout<<"Please enter a number between 1-100: ";
    cin>>n;
    for(int i=0;i<=size-1;i++){//Fills array with random numbers 1-100
        numbers[i]=rand()%100+1;
    }
    cout<<"The numbers larger than "<<n<<" are: "<<endl;
    for(int j=0;j<=size-1;j++){//Compares and displays numbers larger than n
        if(numbers[j]>n){
         cout<<numbers[j]<<" ";   
        }
    }
    
    
    
    
}