/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 24, 2017, 10:53 AM
  Purpose:  Roman numeral conversion program
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const int THOSNDS=1000;     //Conversion to 1000
const int HUNDRDS=100;      //Conversion to 100
const int TENS=10;          //Conversion to 10

//Function Prototypes
string cnvrtRN(unsigned short);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short year;
    
    //Input values
    cout<<"This program will convert years to Roman numerals."<<endl;
    cout<<"Please input a year between 1000AD and 3000AD: ";
    cin>>year;
    
    //Output the Roman Numeral
    for (int year=1000;year<=3000;year++){
    cout<<year<<" = "<<cnvrtRN(year)<<endl;
    }
    
    //Output values

    //Exit stage right!
    return 0;
}
//******************************************************************************
//                         Roman Numeral Conversion
//Description: Convert arabic numbers to roman numerals.  Convert range from
//             1000 to 3000
//Inputs:
//      year - year from 1000-3000
//Outputs:
//      romYear - Output to the screen
//******************************************************************************
string cnvrtRN(unsigned short year){
    //Declare function variables
    char n1000,         //Number of 1000s
         n100,          //Number of 100s
         n10,           //Number of 10s
         n1;            //Number of 1s
    string roman="";
    //Parse the year information
    n1000=(year-year%THOSNDS)/THOSNDS;  //Determines number of 1000s
    year=(year-n1000*THOSNDS);          //Year without 1000s
    n100=(year-year%HUNDRDS)/HUNDRDS;   //Determines number of 100s
    year=(year-n100*HUNDRDS);           //Year without 100s
    n10=(year-year%TENS)/TENS;          //Determines number of 10s
    n1=(year-n10*TENS);                 //Year without 10s
    //Fill the string with Ms
    switch (n1000){
        case 3:roman+='M';
        case 2:roman+='M';
        case 1:roman+='M';break;
        default:cout<<"Bad Year1000"<<endl;        
    }
    //Fill the string with Cs
    switch (n100){
        case 9:roman+="CM";break;
        case 8:roman+="DCCC";break;
        case 7:roman+="DCC";break;
        case 6:roman+="DC";break;
        case 5:roman+="D";break;
        case 4:roman+="CD";break;
        case 3:roman+='C';
        case 2:roman+='C';
        case 1:roman+='C';break;
        case 0:break;
        default:cout<<"Bad Year100"<<endl;        
    }
    //Fill the string with Xs
    switch (n10){
        case 9:roman+="XC";break;
        case 8:roman+="LXXX";break;
        case 7:roman+="LXX";break;
        case 6:roman+="LX";break;
        case 5:roman+="L";break;
        case 4:roman+="XL";break;
        case 3:roman+='X';
        case 2:roman+='X';
        case 1:roman+='X';break;
        case 0:break;
        default:cout<<"Bad Year10"<<endl;        
    }
    //Fill the string with Is
    switch (n1){
        case 9:roman+="IX";break;
        case 8:roman+="VIII";break;
        case 7:roman+="VII";break;
        case 6:roman+="VI";break;
        case 5:roman+="V";break;
        case 4:roman+="IV";break;
        case 3:roman+='I';
        case 2:roman+='I';
        case 1:roman+='I';break;
        case 0:break;
        default:cout<<"Bad Year1"<<endl;        
    }
    //Output string
    return roman;
}