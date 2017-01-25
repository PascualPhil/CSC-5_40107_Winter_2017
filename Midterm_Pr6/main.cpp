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
    int x,n,sign=1,num=1;
    float nfact=1,sum=0,ans=0;
    //Program description
    cout<<"This program will find a solution to the following equation:"<<endl;
    cout<<"sum = x - x^3/3! + x^5/5! - x^7/7! + ... + x^n/n!, where x is a"<<endl;
    cout<<"positive integer and n is a positive odd integer."<<endl;
    cout<<endl;
    
    //Input
    cout<<"Please enter the number that you would as n: ";
    cin>>n;
    //Input validation
    while(n%2!=1 || n==0){
        cout<<"Please enter a positive odd integer: ";
        cin>>n;
    }
    cout<<"Please enter the number that you woul like as x: ";
    cin>>x;
    while(x<=0){
        cout<<"Please enter a positive integer: ";
        cin>>x;
    }
    //Loops to calculate sum
    
    //Main loop
    while(num<=n){
        //Factorial loop
        for(int factc=1;factc<=n;factc++){
            nfact=nfact*factc;
        }
        ans=sign*(pow(x,num))/nfact;
        sum+=ans;
        sign*=-1;//Changes sign each loop
        num+=2;
    }
    //Output
    cout<<"The sum of the equation is "<<sum<<endl;
    cout<<nfact;
    //Exit stage right!
    return 0;
}