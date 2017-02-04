/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on February 4, 2017, 11:30 AM
  Purpose:  Salsa Sales Report Generator
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
int entry();//Function for sales data entry

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=5;//Constant integer to define array size of 5
    string name[SIZE]={"Mild","Medium","Sweet","Hot","Zesty"};//Array for salsa names
    int sold[SIZE];//Array for jars of salsa sold
    string minSold,maxSold;
    int min,max,totSales=0;
    
    //Input values
    cout<<"This program will obtain sales data for five different types"<<endl;
    cout<<"of salsa, display total sales, and display the names of the"<<endl;
    cout<<"highest and lowest selling salsas.  Please enter all required"<<endl;
    cout<<"information when required."<<endl;
    
    for (int i=0;i<=SIZE-1;i++){//Input loop
        cout<<"Please enter the number of jars sold of "<<name[i]<<" salsa: ";
        cin>>sold[i];
        while (sold[i]<=0){
            cout<<"Please enter a positive number: ";
            cin>>sold[i];
            totSales+=sold[i];
        }
        totSales+=sold[i];//Total sales accumulator
    }
    
    //Process by mapping inputs to outputs
    min=max=sold[0];//Min-maxing loop
    minSold=maxSold=name[0];
    for (int j=0;j<=SIZE-1;j++){
        if (sold[j]<min){
            min=sold[j];
            minSold=name[j];
        }
        else if (sold[j]>max){
            max=sold[j];
            maxSold=name[j];
        }
    }
    //Output values
    cout<<endl;
    cout<<"Sales Report:"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"Name:          Sales:"<<endl;
    cout<<"---------------------"<<endl;
    for (int disp=0;disp<=SIZE-1;disp++){
        cout<<left<<setw(6)<<name[disp]<<"       "<<right<<setw(8)<<sold[disp]<<endl;
    }
    cout<<endl;
    cout<<"Total Sales: "<<totSales<<endl;
    cout<<"Highest Sales: "<<maxSold<<endl;
    cout<<"Lowest Sales:  "<<minSold<<endl;
    //Exit stage right!
    return 0;
}
