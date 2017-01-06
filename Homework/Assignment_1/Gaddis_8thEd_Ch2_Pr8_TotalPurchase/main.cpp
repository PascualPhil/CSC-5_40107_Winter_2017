/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 5, 2017, 12:00 PM
  Purpose:  Total purchase program
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

const char PERCENT=100;

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float itemOne=15.95, //Price for Item 1
          itemTwo=24.95, //Price for Item 2
          itemThr=6.95,  //Price for Item 3
          itemFou=12.95, //Price for Item 4
          itemFiv=3.95;  //Price for Item 5
    unsigned char saleTax=7; //Sales Tax in Percent
    float totPrce, totTax, totPaid; //Subtotal, tax, total price paid
    
    //Input values
    
    //Process by mapping inputs to outputs
    totPrce = itemOne+itemTwo+itemThr+itemFou+itemFiv;
    totTax = totPrce*saleTax/PERCENT;
    int id=totTax*100+0.5;  //Integer ID for rounding sales tax to 2 decimal places
    totTax=id/100.0f;
    totPaid = totPrce+totTax;
    //Output values
    cout<<"Price of Item 1: $"<<static_cast<float>(itemOne)<<endl;
    cout<<"Price of Item 2: $"<<static_cast<float>(itemTwo)<<endl;
    cout<<"Price of Item 3: $"<<static_cast<float>(itemThr)<<endl;
    cout<<"Price of Item 4: $"<<static_cast<float>(itemFou)<<endl;
    cout<<"Price of Item 5: $"<<static_cast<float>(itemFiv)<<endl;
    cout<<"Subtotal:        $"<<totPrce<<endl; //Totals Items 1-5 w/ no tax
    cout<<"Sales Tax:       $"<<totTax<<endl;  //Calculated Sales Tax
    cout<<"Total Plus Tax:  $"<<totPaid<<endl; //Subtotal plus Tax total
    //Exit stage right!
    return 0;
}