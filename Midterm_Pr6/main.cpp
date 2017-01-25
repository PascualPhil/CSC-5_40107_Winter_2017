/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 24, 2017, 9:30 PM
  Purpose:  Sequence Calculator
 */

//System Libraries
#include <iostream>
#include <cmath>
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
    int num,k,n,fact,sign=-1;
    float x,power,sum=0;
    //Program description
    cout<<"This program will find a solution to the following equation:"<<endl;
    cout<<"sum = x - x^3/3! + x^5/5! - x^7/7! + ... + x^n/n!, where x and"<<endl;
    cout<<"n are both integers greater than zero.";
    cout<<endl;
    
    //Input
    cout<<"Please enter the number that you would as n: ";
    cin>>n;
    //Input validation
    while(n<=0){
        cout<<"Please enter an integer greater than zero: ";
        cin>>n;
    }
    cout<<"Please enter the number that you would like as x: ";
    cin>>x;
    while(x<=0){
        cout<<"Please enter an integer greater than zero: ";
        cin>>x;
    }
    //Loops to calculate sum
    //Main loop that adds/subtracts x^n/n!
    for(num=1;num<=n;num+=2){
        power=1;
        fact=1;
        //Loop that finds x^n and n!
        for(k=1;k<=num;k++){
            power=power*x;
            fact=fact*k;
        }
        sign*=-1;//Sign change each iteration
        sum+=sign*power/fact;
    }
    //Output
    cout<<"The sum of the equation is "<<sum<<endl;
    //Exit stage right!
    return 0;
}