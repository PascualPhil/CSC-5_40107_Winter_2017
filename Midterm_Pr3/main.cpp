/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 25, 2017, 1:15 PM
  Purpose:  Midterm Problem 3 Program
 
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another
const int THOUSND=1000;
const int HUNDRED=100;
const int TENS=10;

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    string date,payee,actHold;      //Strings for date, payee and account holder
    int amount;                     //Dollar amount to be sent
    char n1000,n100,n10,n1,n20;
    string written;
    
    //Program description
    cout<<"This program will write a check based on the date, payee, amount, and"<<endl;
    cout<<"account holder input by the user.  Please enter the required information"<<endl;
    cout<<"when requested."<<endl;
    cout<<endl;
    
    //Inputs and input validation
    cout<<"Please enter the date: ";
    cin>>date;
    cout<<"Please enter the payee: ";
    cin>>payee;
    cout<<"Please enter the amount in whole numbers, up to $1999: $";
    cin>>amount;
    while(amount<=0||amount>1999){
        cout<<"Please enter a valid amount: $";
        cin>>amount;
    }
    cout<<"Please enter name of account holder: ";
    cin>>actHold;
    
    //Parse the amount
    n1000=(amount-amount%THOUSND)/THOUSND;      //Determines number of thousands
    amount=(amount-n1000*THOUSND);              //Remaining amount without 1000s
    n100=(amount-amount%HUNDRED)/HUNDRED;       //Determines number of hundreds
    amount=(amount-n100*HUNDRED);               //Remaining amount without 100s
    n10=(amount-amount%TENS)/TENS;             //Determines number of tens
    n1=(amount-n10*TENS);                       //Amount without 10s
    
    //Fill string with Thousands
    switch(n1000){
        case 1:written+="One Thousand ";break;
        case 0:break;
        default:cout<<"Bad Amount 1000s"<<endl;
    }
    //Fill string with Hundreds
    switch(n100){
        case 9:written+="Nine Hundred ";break;
        case 8:written+="Eight Hundred ";break;
        case 7:written+="Seven Hundred ";break;
        case 6:written+="Six Hundred ";break;
        case 5:written+="Five Hundred ";break;
        case 4:written+="Four Hundred ";break;
        case 3:written+="Three Hundred ";break;
        case 2:written+="Two Hundred ";break;
        case 1:written+="One Hundred ";break;
        case 0:break;
        default:cout<<"Bad Amount 100s"<<endl;
    }
    //Fill string with Tens
    switch(n10){
        case 9:written+="Ninety ";break;
        case 8:written+="Eight ";break;
        case 7:written+="Seventy ";break;
        case 6:written+="Sixty ";break;
        case 5:written+="Fifty ";break;
        case 4:written+="Fourty ";break;
        case 3:written+="Thirty ";break;
        case 2:written+="Twenty ";break;
        case 1:{
            n20=amount%20;
            switch(n20){
                case 19:written+="Nineteen";break;
                case 18:written+="Eighteen";break;
                case 17:written+="Seventeen";break;
                case 16:written+="Sixteen";break;
                case 15:written+="Fifteen";break;
                case 14:written+="Fourteen";break;
                case 13:written+="Thirteen";break;
                case 12:written+="Twelve";break;
                case 11:written+="Eleven";break;
                case 10:written+="Ten";break;
            }
        }
        case 0:break;
        default:cout<<"Bad Amount 10s"<<endl;
    }
    //Fill the string with Ones
    if(n10==0){
        switch(n1){
            case 9:written+="Nine";break;
            case 8:written+="Eight";break;
            case 7:written+="Seven";break;
            case 6:written+="Six";break;
            case 5:written+="Five";break;
            case 4:written+="Four";break;
            case 3:written+="Three";break;
            case 2:written+="Two";break;
            case 1:written+="One";break;
            case 0:break;
            default:cout<<"Bad Amount 1s"<<endl;
        }
    }
    //Output
    cout<<written<<" and 00/100 Dollars";
    //Exit stage right!
    return 0;
}