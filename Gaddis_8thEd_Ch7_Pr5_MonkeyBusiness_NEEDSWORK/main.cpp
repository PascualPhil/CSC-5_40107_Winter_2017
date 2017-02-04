/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on February 4, 2017, 2:15 PM
  Purpose:  Monkey Feeding Amount Calculator
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

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int ROWS=3;//Constant integers setting size for 2D array
    const int COLS=5;
    float amtFood[ROWS][COLS];//Array for amount of food fed
    float avgFood=0,minFood,maxFood,totFood=0;//Average food eaten, minimum/maximum eaten
    int total[ROWS];//Array that stores total amount of food eaten per monkey for week
    int minMonk,maxMonk;
    
    //Input values
    cout<<"This program will store the amount of food eaten per monkey during"<<endl;
    cout<<"the week and then will out put the average amount of food eaten per"
            <<endl;
    cout<<"day, and the minimum and maximum amounts of food eaten during the week."
            <<endl;
    cout<<"Please enter all required information when requested."<<endl;
    cout<<endl;
    for(int r=0;r<=ROWS-1;r++){//Loop to move through rows one at a time
        for(int c=0;c<=COLS-1;c++){//Loop to move through each column
            cout<<"Please enter the amount of food eaten on Day "<<c+1<<" by "
                    "Monkey "<<r+1<<": ";
            cin>>amtFood[r][c];
        }
        cout<<endl;
    }
    
    //Output values
    //Obtain and display average amount of food eaten
    for(int row=0;row<=ROWS-1;row++){//Loop to get sum and average for each row
        avgFood=0;
        totFood=0;
        for(int col=0;col<=COLS-1;col++){
            totFood+=amtFood[row][col];//Sums the row
        }
        avgFood=totFood/5;//Gets the average amount of food for one Monkey
        cout<<"The average amount of food eaten per day by Monkey "<<row+1<<
                    " is: "<<fixed<<setprecision(2)<<avgFood<<endl;
    }
    
    //Obtain and compare weekly consumption amounts
    for(int ro=0;ro<=ROWS-1;ro++){//Fills total array with weekly consumption
                                  //for each monkey
        for(int co=1;co<=COLS-1;co++){
            total[ro]+=amtFood[ro][co];
        }
    }
    minFood=maxFood=total[0];
    for(int tot=0;tot<=2;tot++){
        if(total[tot]<minFood){
            total[tot]=minFood;
            tot=minMonk;
        }
        else if(total[tot]>maxFood){
            total[tot]=maxFood;
            tot=maxMonk;
        }
    }
    //Output minimimum and maximum food eaten
    cout<<"The minimum weekly consumption is Monkey "<<minMonk<<": "<<static_cast<int>(minFood)<<endl;
    cout<<"The maximum weekly consumption is Monkey "<<maxMonk<<": "<<static_cast<int>(maxFood)<<endl;

    //Exit stage right!
    return 0;
}