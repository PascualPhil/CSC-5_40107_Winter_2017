/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 16, 2017, 11:30 AM
  Purpose:  Assignment 3 with menu system
 */

//System Libraries
#include <iostream>
#include <iomanip>      //For setprecision
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
    int choice;     //Program chosen
    
    //Display programs and ask for a choice
    cout<<"This program will display and run all Assignment 3 problems as selected."<<endl;
    cout<<"Please select from the following programs:"<<endl;
    cout<<"1. Minimum Maximum"<<endl;
    cout<<"2. Roman Numeral Converter"<<endl;
    cout<<"3. Magic Dates"<<endl;
    cout<<"4. Area of Rectangles"<<endl;
    cout<<"5. Body Mass Index"<<endl;
    cout<<"6. Mass and Weight"<<endl;
    cout<<"7. Time Calculator"<<endl;
    cout<<"8. Color Mixer"<<endl;
    cout<<"9. Change for a Dollar Game"<<endl;
    cout<<"10. Days in a Month"<<endl;
    cout<<endl;
    cout<<"Please enter the number that corresponds with the program you wish to run: ";
    cin>>choice;
    cout<<endl;
    
    //Respond to user input
    switch (choice)
    {
        case 1:{        //Minimum Maximum Program
            int numOne,         //First number entered
                numTwo;         //Second number entered
            cout<<"This program will determine if one number is greater than or less than"<<endl;
            cout<<"another."<<endl;
            cout<<"Please enter the first number: ";
            cin>>numOne;
            cout<<"Please enter the second number: ";
            cin>>numTwo;
            if(numOne>numTwo)
                cout<<numOne<<" is greater than "<<numTwo<<endl;
            else
                cout<<numTwo<<" is greater than "<<numOne<<endl;
        }
            break;
        
        case 2:{        //Roman Numeral Calculator Program
            unsigned short number;      //Number to be converted
            string roman;                 //Roman numeral
            cout<<"This program will convert a number from 1-10 into Roman Numerals."<<endl;
            cout<<"Please enter a number 1-10: ";
            cin>>number;
            cout<<endl;
            cout<<"The roman numeral for "<<number<<" is: ";
            switch(number){
                case 1:cout<<"I";break;
                case 2:cout<<"II";break;
                case 3:cout<<"III";break;
                case 4:cout<<"IV";break;
                case 5:cout<<"V";break;
                case 6:cout<<"VI";break;
                case 7:cout<<"VII";break;
                case 8:cout<<"VIII";break;
                case 9:cout<<"IX";break;
                case 10:cout<<"X";break;
                default:cout<<"Please enter a number between 1-10.";
            }
        }
            break;        
        case 3:{        //Magic Dates Program
            unsigned int month,         //2-digit month
                         day,           //2-digit day
                         year;          //2-digit year
            cout<<"This program will determine if a date entered is a 'Magic Date'."<<endl;
            cout<<"Please enter all required information when prompted."<<endl;
            cout<<"Please enter a 2-digit month (1-12): ";
            cin>>month;
            cout<<"Please enter a 2-digit day (1-31): ";
            cin>>day;
            cout<<"Please enter a 2-digit year: ";
            cin>>year;
            if ((month*day)==year)
                cout<<"Congratulations! This is a MAGIC DATE!";
            else
                cout<<"Sorry, this is not a magic date.  Please try again.";
        }
            break;
        case 4:{        //Area of Rectangles Program
            unsigned int length1,            //Length rectangle 1
                         length2,            //Length rectangle 2
                         width1,             //Width rectangle 1
                         width2,             //Width rectangle 2
                         area1,              //Area rectangle 1
                         area2;              //Area rectangle 2
            cout<<"This program will compare the area of two rectangles based on the length"<<endl;
            cout<<"and width entered for each.  Please enter required information when prompted."<<endl;
            cout<<"Please enter length for rectangle 1 in whole numbers: ";
            cin>>length1;
            cout<<"Please enter width for rectangle 1 in whole numbers: ";
            cin>>width1;
            cout<<"Please enter length for rectangle 2 in whole numbers: ";
            cin>>length2;
            cout<<"Please enter width for rectangle 2 in whole numbers: ";
            cin>>width2;
            area1=length1*width1;       //Rectangle 1 area
            area2=length2*width2;       //Rectangle 2 area
            if(area1==area2)
                cout<<"The area for both rectangles is the same.";
            else if(area1>area2)
                cout<<"Rectangle 1 has a larger area than Rectangle 2.";
            else
                cout<<"Rectangle 2 has a larger area than Rectangle 1.";
        }
            break;
        case 5:{        //Body Mass Index Program
            float weight,     //Weight in pounds
                  height,     //Height in inches
                  bmi;        //Body mass index
            cout<<"This program will determine your Body Mass Index (BMI) and your weight category."<<endl;
            cout<<"Please enter all required information when prompted."<<endl;
            cout<<endl;
            cout<<"Please enter your height in whole inches: ";
            cin>>height;
            cout<<"Please enter weight in whole pounds: ";
            cin>>weight;
            bmi=weight*(703/(height*height));   //Equation that determines BMI
            if (bmi>=18.5 && bmi<=25){
                cout<<"Your BMI is "<<fixed<<setprecision(2)<<bmi<<" and you are considered of OPTIMAL weight."<<endl;
            }
            else if (bmi>25){
                cout<<"Your BMI is "<<fixed<<setprecision(2)<<bmi<<" and you are considered OVERWEIGHT."<<endl;
            }  
            else if (bmi<18.5){
                cout<<"Your BMI is "<<fixed<<setprecision(2)<<bmi<<" and you are considered UNDERWEIGHT."<<endl;
            }
        }
            break;
        case 6:{        //Mass and Weight Program
            float weight;       //Weight
            int   mass;         //Mass in newtons
            cout<<"This program will calculate the weight of an object based on its mass"<<endl;
            cout<<"in kilograms.  Please enter required information when prompted."<<endl;
            cout<<endl;
            cout<<"Please enter the object's mass in kilograms: ";
            cin>>mass;
            if (mass<=1000 && mass>=10){
                weight=mass*9.8;
                cout<<"This object has a weight of "<<weight<<" newtons."<<endl;
            }
            else if (mass>1000){
                cout<<"This object's mass is too high. Please run program again with a lower mass.";
            }
            else if (mass<10){
                cout<<"This object's mass is too low.  Please run program again with a higher mass.";
            }
        }
            break;
        case 7:{        //Time Calculator Program
            int numSecs,        //Number of seconds input
                numMins,        //Number of minutes
                numHrs,         //Number of hours
                numDays;        //Number of days
            cout<<"This program will calculate the number of minutes, hours, and days for"<<endl;
            cout<<"an input number of seconds.  Please enter required information when prompted."<<endl;
            cout<<"Please enter the number of seconds in whole numbers: ";
            cin>>numSecs;
            if (numSecs<60){
                cout<<"Please enter a number over 60.";
            }
            else if (numSecs>=60 && numSecs<3600){
                numMins=numSecs/60;
                cout<<"There are "<<numMins<<" minute(s) in "<<numSecs<<" seconds.";
            }
            else if (numSecs>=3600 && numSecs<86400){
                numHrs=numSecs/3600;
                cout<<"There are "<<numHrs<<" hours in "<<numSecs<<" seconds.";
            }
            else if (numSecs>=86400){
                numDays=numSecs/86400;
                cout<<"There are "<<numDays<<" days in "<<numSecs<<" seconds.";
            }
        }
            break;
        case 8:{        //Color Mixer Program
            string color1,      //First color entered
                   color2;      //Second color entered
            cout<<"This program will determine the combination of two primary colors input."<<endl;
            cout<<"Please enter required information when prompted."<<endl;
            cout<<"Please enter the first color (red, yellow, blue): ";
            cin>>color1;
            cout<<"Please enter the second color (red, yellow, blue): ";
            cin>>color2;
            if (color1=="red"){
                if (color2=="blue"){
                    cout<<color1<<" and "<<color2<<" combine to make purple.";
                }
                else if (color2=="yellow"){
                    cout<<color1<<" and "<<color2<<" combine to make orange.";
                }
                else
                    cout<<"Please input a valid secondary color.";
            }
            else if (color1=="blue"){
                if (color2=="red"){
                    cout<<color1<<" and "<<color2<<" combine to make purple.";
                }
                else if (color2=="yellow"){
                    cout<<color1<<" and "<<color2<<" combine to make green.";
                }
                else
                    cout<<"Please input a valid secondary color.";
            }
            else if (color1=="yellow"){    
                if (color2=="red"){
                    cout<<color1<<" and "<<color2<<" combine to make orange.";
                }
                else if (color2=="blue"){
                    cout<<color1<<" and "<<color2<<" combine to make green.";
                }
                else
                    cout<<"Please input a valid secondary color.";
            }
            else {
                cout<<"Please choose a different primary color.";
            }
        }
            break;
        case 9:{        //Change For a Dollar Program
            int pennies,        //Number of pennies
                nickels,        //Number of nickels
                dimes,          //Number of dimes
                quartrs;        //Number of quarters
            float total;        //Total
            cout<<"This program will challenge you to make a quantity of pocket change equal"<<endl;
            cout<<"one dollar exactly.  Please enter the following values when prompted."<<endl;
            cout<<endl;
            cout<<"Enter the number of pennies: ";
            cin>>pennies;
            cout<<"Enter the number of nickels: ";
            cin>>nickels;
            cout<<"Enter the number of dimes: ";
            cin>>dimes;
            cout<<"Enter the number of quarter: ";
            cin>>quartrs;
            total=((pennies*.01)+(nickels*.05)+(dimes*.10)+(quartrs*.25));
            if (total==1){
                cout<<"Congratulations! You total equals $1.00.  You win!";
            }
            else if (total>1){
                cout<<"Sorry, your total is more than $1.00.  Please try again.";
            }
            else if (total<1){
                cout<<"Sorry, your total is less than $1.00.  Please try again.";
            }
        }
            break;
        case 10:{       //Days in a month program
            int month,      //Numeric month
                year;       //Numeric year
            cout<<"This program will determine the number of days in an input month and year."<<endl;
            cout<<"Please enter the required information when prompted."<<endl;
            cout<<endl;
            cout<<"Please enter the two-digit month (1-12): ";
            cin>>month;
            cout<<"Please enter the four-digit year: ";
            cin>>year;
            if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10
            || month==12){
                cout<<"There are 31 days in that month.";
            }
            else if (month==4 || month==6 || month==9 || month==11){
                cout<<"There are 30 days in that month.";
            }
            else if (year%4==0){
                if (year%100==0){
                    if (year%400==0)
                        cout<<"There are 29 days in this month.";
                    else
                        cout<<"There are 28 days in this month.";
                }
                else
                    cout<<"There are 29 days in this month.";
            }
            else 
                    cout<<"There are 28 days in that month.";
        }
            break;
    }
    //Output values

    //Exit stage right!
    return 0;
}