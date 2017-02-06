/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on February 5, 2017, 9:00 PM
  Purpose:  Grade Book Program
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
    const int SIZE=5;
    const int SCORES=4;
    string studnts[SIZE];//String array storing student names
    char grades[SIZE];//Array storing letter grades
    int tests[SIZE][SCORES];//Arrays holding test scores
    int totSco[SIZE]={0,0,0,0,0};
    float average[SIZE];
    
    //Input values
    cout<<"This program will obtain the names of five different students"<<endl;
    cout<<"and obtain their test scores.  It will then display their names"<<endl;
    cout<<"average test scores and overall letter grade.  Please enter"<<endl;
    cout<<"all required information when requested."<<endl;
    cout<<endl;
    
    //Loops to obtain student name and test scores
    for(int student=0;student<=SIZE-1;student++){
        cout<<"Please enter the name for Student "<<student+1<<": ";
        getline(cin,studnts[student]);
        for(int test=0;test<=SCORES-1;test++){
            cout<<"Please enter "<<studnts[student]<<"'s test score for test"
                    " number "<<test+1<<": ";
            cin>>tests[student][test];
            while(tests[student][test]<0){
                cout<<"Please enter a number greater than or equal to 0: ";
                cin>>tests[student][test];
            }
            totSco[student]+=tests[student][test];
            cin.ignore();
        }
    }
    
    //Process by mapping inputs to outputs
    for(int i=0;i<=SIZE-1;i++){
        average[i]=static_cast<float>(totSco[i])/SCORES;
        if (average[i]>=90){
            grades[i]='A';
        }
        else if(average[i]>=80&&average[i]<90){
            grades[i]='B';
        }
        else if(average[i]>=70&&average[i]<80){
            grades[i]='C';
        }
        else if(average[i]>=60&&average[i]<70){
            grades[i]='D';
        }
        else grades[i]='F';
    }
    //Output values
    cout<<"Student Name:          Average:           Grade:"<<endl;
    cout<<"------------------------------------------------"<<endl;
    for(int j=0;j<=SIZE-1;j++){
        cout<<left<<setw(20)<<studnts[j]<<"     "<<right<<setw(6)<<fixed<<setprecision(2)<<
                average[j]<<"              "<<grades[j]<<endl;
    }
    //Exit stage right!
    return 0;
}