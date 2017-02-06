/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on February 6, 2017, 12:00 PM
  Purpose:  Lottery Application
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

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set RNG seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=5;//Sets size of array
    int lottery[SIZE];
    int picks[SIZE];
    int match=0;
    
    //Input values
    cout<<"This program will allow you to enter five digits for a lottery"<<endl;
    cout<<"and will match the entered digits against the randomly picked"<<endl;
    cout<<"numbers.  Please enter the required information when prompted."<<endl;
    cout<<endl;
    for(int pick=0;pick<=SIZE-1;pick++){
        cout<<"Please enter your pick for number "<<pick+1<<": ";
        cin>>picks[pick];
        while(picks[pick]>9&&picks[pick]<0){
            cout<<"Please enter a number between 0 and 9: ";
            cin>>picks[pick];
        }
    }
    //Process by mapping inputs to outputs
    for(int num=0;num<=SIZE-1;num++){
        lottery[num]=rand()%10;//Generates random number between 0-9 and
                               //inserts into array
    }
    for(int check=0;check<=SIZE-1;check++){
        if(lottery[check]==picks[check])match++;
    }
    //Output values
    cout<<"Your numbers: ";
    for(int disp=0;disp<=SIZE-1;disp++){
        cout<<picks[disp]<<" ";
    }
    cout<<endl;
    cout<<"Picked numbers: ";
    for(int disp1=0;disp1<=SIZE-1;disp1++){
        cout<<lottery[disp1]<<" ";
    }
    cout<<endl;
    if(match==SIZE){
        cout<<"CONGRATULATIONS! You win the grand prize!!"<<endl;
    }else{
        cout<<"You picked "<<match<<" numbers correctly."<<endl;
    }
    //Exit stage right!
    return 0;
}