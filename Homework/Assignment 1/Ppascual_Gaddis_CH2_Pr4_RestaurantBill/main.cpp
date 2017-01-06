/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 5, 2017, 4:30 PM;
  Purpose:  Restaurant tax and tip calculator program.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const int PERCENT=100; //Constant definition of percent.
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float mealCst=88.67, //Meal cost
          taxRate=6.75,  //Sales tax rate
          tipRate=20,    //Tip percentage
            taxAmnt,     //Tax amount
            mealTax,     //Meal plus tax
            tipAmnt,     //Tip amount
            totAmnt;     //Total cost
    //Input values
    
    //Process by mapping inputs to outputs
    taxAmnt=mealCst*taxRate/PERCENT; //Meal cost times tax rate percent
    int id1=taxAmnt*100+0.5;         //Rounds to two decimal places
    taxAmnt=id1/100.0f;
    mealTax=mealCst+taxAmnt;         //Meal plus tax
    tipAmnt=mealTax*tipRate/PERCENT; //Meal plus tax times tip percent
    int id2=tipAmnt*100+0.5;         //Rounds to two decimal places
    tipAmnt=id2/100.0f;
    totAmnt=mealTax+tipAmnt;         //Meal plus tax plus tip
    //Output values
    cout<<"This program calculates the tax and tip amounts for a "<<endl;
    cout<<"restaurant bill with the below total and tax/tip percentages."<<endl;
    cout<<"Total Cost of Meal:    $"<<static_cast<float>(mealCst)<<endl;
    cout<<"Sales tax percentage:   "<<static_cast<float>(taxRate)<<"%"<<endl;
    cout<<"Tip percentage:         "<<static_cast<float>(tipRate)<<"%"<<endl;
    cout<<"Sales tax:             $"<<taxAmnt<<endl;
    cout<<"Total Cost:            $"<<mealTax<<endl;
    cout<<"Tip Amount:            $"<<tipAmnt<<endl;
    cout<<"Total Meal plus Tip:   $"<<totAmnt<<endl;
    //Exit stage right!
    return 0;
}
