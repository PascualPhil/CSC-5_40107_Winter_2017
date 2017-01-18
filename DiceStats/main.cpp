/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 18, 2017, 10:35 AM
  Purpose:  Statistics for throwing 2 dice
 */

//System Libraries
#include <iostream>     //I/O lib
#include <cstdlib>      //RNG generator lib
#include <ctime>        //Time lib to set RNG seed
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set RNG seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned int nThrows=36000; //Number of dice throws
    unsigned int n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0,
            n10=0,n11=0,n12=0;
    
    //Loop and take dice stats
    for(int toss=1;toss<=nThrows;toss++){
        //Call in RNG for dice
        char die1=rand()%6+1;   //Gives value from 1-6
        char die2=rand()%6+1;   //Gives value from 1-6 for die 2
        char sum=die1+die2;     //Sum of both dice
        switch(sum){
            case 2:n2++;break;      //Increments each time sum 
            case 3:n3++;break;      //equals 2-12 and accumulates 
            case 4:n4++;break;      //total
            case 5:n5++;break;
            case 6:n6++;break;
            case 7:n7++;break;
            case 8:n8++;break;
            case 9:n9++;break;
            case 10:n10++;break;
            case 11:n11++;break;
            case 12:n12++;break;
            default: cout<<"You are in error."<<endl;
        }
    }
    
    //Output values
    cout<<"2 was thrown "<<n2<<" times."<<endl;
    cout<<"3 was thrown "<<n3<<" times."<<endl;
    cout<<"4 was thrown "<<n4<<" times."<<endl;
    cout<<"5 was thrown "<<n5<<" times."<<endl;
    cout<<"6 was thrown "<<n6<<" times."<<endl;
    cout<<"7 was thrown "<<n7<<" times."<<endl;
    cout<<"8 was thrown "<<n8<<" times."<<endl;
    cout<<"9 was thrown "<<n9<<" times."<<endl;
    cout<<"10 was thrown "<<n10<<" times."<<endl;
    cout<<"11 was thrown "<<n11<<" times."<<endl;
    cout<<"12 was thrown "<<n12<<" times."<<endl;
    cout<<"The total number of throws = "<<(n2+n3+n4+n5+n6+n7+n8
            +n9+n10+n11+n12)<<" throws"<<endl;
    cout<<"The total throws = "<<nThrows<<" throws"<<endl;
    
    //Exit stage right!
    return 0;
}