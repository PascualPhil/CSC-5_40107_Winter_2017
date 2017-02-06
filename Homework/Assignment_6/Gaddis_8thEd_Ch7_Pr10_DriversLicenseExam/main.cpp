/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on February 5, 2017, 8:21 PM
  Purpose:  Driver's License Exam Program
 */

//System Libraries
#include <iostream>
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
    const int SIZE=20;//Constant integer defining array size
    char key[SIZE]={'A','D','B','B','C','B','A','B','C','D','A','C','D','B','D',
        'C','C','A','D','B'};//Answer key
    char answers[SIZE];//Student answers
    int correct=0;
    
    //Input values
    cout<<"This program will obtain and grade a Driver's License Exam from"<<endl;
    cout<<"a student.  Please enter all required answers when requested."<<endl;
    cout<<endl;
    
    //Loop to obtain answers
    for(int ans=0;ans<=SIZE-1;ans++){
        cout<<"Please enter your answer for Question "<<ans+1<<": ";
        cin>>answers[ans];
        while(answers[ans]!='A'&&answers[ans]!='B'&&answers[ans]!='C'&&
                answers[ans]!='D'){
            cout<<"Please enter A, B, C, or D: ";
            cin>>answers[ans];
        }
    }
    //Process by mapping inputs to outputs
    //Loop to check answers against key and determine if correct
    for(int i=0;i<=SIZE-1;i++){
        if(answers[i]==key[i]){
            correct++;
        }
    }
    //Output values
    if(correct>=15){
        cout<<"Your score: "<<correct<<" out of 20.  You passed!"<<endl;
    }
    else cout<<"Your score: "<<correct<<" out of 20.  Sorry, you did not pass."
            <<endl;
    //Exit stage right!
    return 0;
}