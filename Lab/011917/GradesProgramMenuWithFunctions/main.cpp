/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 17, 2017, 12:15 PM
  Purpose:  Example menu to be used in homework
 */

//System Libraries
#include <iostream>
#include <cstdlib>      //For srand seed
#include <ctime>        //Time library
#include <iomanip>      //Format library
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
void prob1();
void prob2();
void prob3();
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;       //Choice of program to view
    
    //Loop on the menu
    do{
        //Input values
        cout<<"Please select a program from the list."<<endl;
        cout<<"Type 1 for Problem with Do-While"<<endl;
        cout<<"Type 2 for Problem with While"<<endl;
        cout<<"Type 3 for Problem with For"<<endl;
        cin>>choice;

        //Switch to determine the problem
        switch(choice){
            case '1':{prob1();break;}
            case '2':{prob2();break;}
            case '3':{prob3();break;}
            default:
                cout<<"You are exiting the program."<<endl;
        }
        cout<<endl;
    }while(choice>='1'&&choice<='3');
    

    //Exit stage right!
    return 0;
}
void prob1(){
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));

    //Declare and Initialize local Variables to main
    char numStd=20,
         student=1;         //Number of students
    unsigned short average=0;

    //Input values
    cout<<"This program will take an input score and will output the letter grade for "
            <<static_cast<int>(numStd)<<" students."<<endl;

    //Loop for each student
    do{
        //Assign a grade and add to the average
        //Score and grade are local to the while loop
        unsigned short score=rand()%50+50;
        average+=score;
        //Process by mapping inputs to outputs
        char grade=(score>=90)?'A':
                   (score>=80)?'B':
                   (score>=70)?'C':
                   (score>=60)?'D':'F';
        //Output values
        cout<<"Student "<<setw(2)<<static_cast<int>(student)
                <<" has score "<<score<<" = "<<grade<<endl;
    }while(++student<=numStd);

    //Calculate and output the average
    average/=numStd;
    cout<<"The average test score is = "<<average<<endl;
}
void prob2(){
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));

    //Declare and Initialize local Variables to main
    char numStd=20,
         student=0;         //Number of students
    unsigned short average=0;

    //Input values
    cout<<"This program will take an input score and will output the letter grade for "
            <<static_cast<int>(numStd)<<" students."<<endl;

    //Loop for each student
    while(++student<=numStd){
        //Assign a grade and add to the average
        //Score and grade are local to the while loop
        unsigned short score=rand()%50+50;
        average+=score;
        //Process by mapping inputs to outputs
        char grade=(score>=90)?'A':
                   (score>=80)?'B':
                   (score>=70)?'C':
                   (score>=60)?'D':'F';
        //Output values
        cout<<"Student "<<setw(2)<<static_cast<int>(student)
                <<" has score "<<score<<" = "<<grade<<endl;
    }
    //Calculate and output the average
    average/=numStd;
    cout<<"The average test score is = "<<average<<endl;
}
void prob3(){
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));

    //Declare and Initialize local Variables to main
    char numStd=20;
    unsigned short average=0;

    //Input values
    cout<<"This program will take an input score and will output the letter grade for "
            <<static_cast<int>(numStd)<<" students."<<endl;

    //Loop for each student
    for(char student=1;student<=numStd;student++){
        //Assign a grade and add to the average
        //Score and grade are local to the while loop
        unsigned short score=rand()%50+50;
        average+=score;
        //Process by mapping inputs to outputs
        char grade=(score>=90)?'A':
                   (score>=80)?'B':
                   (score>=70)?'C':
                   (score>=60)?'D':'F';
        //Output values
        cout<<"Student "<<setw(2)<<static_cast<int>(student)
                <<" has score "<<score<<" = "<<grade<<endl;
    }

    //Calculate and output the average
    average/=numStd;
    cout<<"The average test score is = "<<average<<endl;
}