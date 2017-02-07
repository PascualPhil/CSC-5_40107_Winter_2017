/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on February 3, 2017, 12:15 PM
  Purpose:  Demonstrate 2D Array Functions
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
const int ROWS=2;
const int COLS=2;
//Function Prototypes
void getTotl(int[][COLS],int);
void getAvg(int[][COLS],int);
void rowTotl(int[][COLS],int);/*
int colTotl(int[][COLS],int);
int highRow(int[][COLS],int);
int highCol(int[][COLS],int);*/

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set RNG seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int ROWS=2;
    const int COLS=2;
    int tstAray[ROWS][COLS];//Test array
    
    //Input values/fill array
    for(int i=0;i<=ROWS-1;i++){//Loop to fill array
        for(int j=0;j<=COLS-1;j++){
            tstAray[i][j]=rand()%10;//Fills array with random number 1-10;
        }
    }
    
    //Prints array to verify functions
    for(int r=0;r<=ROWS-1;r++){
        for(int c=0;c<=COLS-1;c++){
            cout<<tstAray[r][c]<<"  ";
        }
        cout<<endl;
    }
    //Process by mapping inputs to outputs
    getTotl(tstAray,ROWS);
    getAvg(tstAray,ROWS);
    rowTotl(tstAray,ROWS);
    
    //Output values

    //Exit stage right!
    return 0;
}

void getTotl(int a[][COLS],int rows){
    int total;
    for(int r=0;r<=ROWS-1;r++){
        for(int col=0;col<=COLS-1;col++){
            total+=a[r][col];
        }
    }
    cout<<"The total for all cells in the array is: "<<total<<endl;
}

void getAvg(int a[][COLS],int rows){
    int total;
    float avg;
    for(int r=0;r<=ROWS-1;r++){
        for(int col=0;col<=COLS-1;col++){
            total+=a[r][col];
        }
    }
    avg=static_cast<float>(total)/8;
    cout<<"The average of all cells in the array is: "<<avg<<endl;
}

void rowTotl(int a[][COLS],int rows){
    int total;
    cout<<"Please enter the row that you would like to sum: ";
    cin>>rows;
    
}