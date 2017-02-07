/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on February 6, 2017, 6:30 PM
  Purpose:  Menu for Gaddis Chapter 6 Problems
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const float PERCENT=100.0f;    //Constant percentage converter

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
void larger(int,int [],int);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int num;//Problem number
    char response;
    
    //Input values
    cout<<"This program will display all 9 problems from Gaddis 8th Edition"<<endl;
    cout<<"Chapter 7 that have been completed.  Please select the appropriate"<<endl;
    cout<<"problem from the list below."<<endl;
    do{
    //Process by mapping inputs to outputs
        cout<<"Please select a program from the list."<<endl;
        cout<<"Type 1 for Largest Smallest"<<endl;
        cout<<"Type 2 for Rainfall Statistics"<<endl;
        cout<<"Type 3 for Chips and Salsa"<<endl;
        cout<<"Type 4 for Larger than N"<<endl;
        cout<<"Type 5 for Monkey Business"<<endl;
        cout<<"Type 6 for Payroll"<<endl;
        cout<<"Type 7 for Driver's License Exam"<<endl;
        cout<<"Type 8 for Grade Book"<<endl;
        cout<<"Type 9 for Lottery Application"<<endl;        
        cout<<"Please enter the problem number you wish to view: ";
        cin>>num;
        while(num<1||num>9){
            cout<<"Please select a number 1-9: ";
            cin>>num;
        }
        cout<<endl;
        switch(num){
            case 1:prob1();break;
            case 2:prob2();break;
            case 3:prob3();break;
            case 4:prob4();break;
            case 5:prob5();break;
            case 6:prob6();break;
            case 7:prob7();break;
            case 8:prob8();break;
            case 9:prob9();break;
        }
        cout<<"Do you wish to continue viewing problems (Y/N)? ";
        cin>>response;
        while(response!='Y'&&response!='y'&&response!='N'&&response!='n'){
            cout<<"Please select response Y or N: ";
            cin.ignore();
            cin>>response;
        }
    }while(response=='Y'||response=='y');
    //Output values

    //Exit stage right!
    return 0;
}

void prob1(){
    //Declare Variables
    const int SIZE=9;//Creates size of array
    int num[SIZE],min,max;
    
    //Input values
    cout<<"This program will find the minimum and maximum numbers that were"<<endl;
    cout<<"entered into an array.  Please enter the required information"<<endl;
    cout<<"when prompted."<<endl;
    cout<<endl;
    for (int i=0;i<=SIZE;i++){
        cout<<"Please enter value "<<(i+1)<<": ";
        cin>>num[i];
    }
    //Process by mapping inputs to outputs
    min=max=num[0];
    for (int f=0;f<=SIZE;f++){
        if (num[f]<min){
            min=num[f];
        }
        else if (num[f]>max){
            max=num[f];
        }
    }
    
    //Output values
    cout<<"The maximum number in the array is "<<max<<endl;
    cout<<"The minimum number in the array is "<<min<<endl;
}

void prob2(){
    //Declare Variables
    const int SIZE=12;//Constant defining size of arra
    int rain[SIZE];//Array to store rainfall data
    int totRain=0,minRain,maxRain,minMon,maxMon;
    float avgRain;
    
    //Input values
    cout<<"This program will calculate average, total, and minimum/maximum"
            <<endl;
    cout<<"rainfall for a year.  Please enter all required information when"
            <<endl;
    cout<<"prompted."<<endl;
    cout<<endl;
    
    //Obtain/store rainfall data
    for(int month=0;month<=SIZE-1;month++){
        cout<<"Please enter rainfall data for Month "<<month+1<<": ";
        cin>>rain[month];
        while(rain[month]<0){
            cout<<"Please enter a positive number: ";
            cin>>rain[month];
        }
        totRain+=rain[month];//Accumulates rain total      
    }
    
    //Process by mapping inputs to outputs
    //Obtains average monthly rainfall
    avgRain=static_cast<float>(totRain)/SIZE;
    minRain=maxRain=rain[0];
    minMon=maxMon=1;
    for(int mo=0;mo<=SIZE-1;mo++){
        if(rain[mo]<minRain){
            minRain=rain[mo];
            minMon=mo+1;
        }
        else if(rain[mo]>maxRain){
            maxRain=rain[mo];
            maxMon=mo+1;
        }
    }
   
    //Output values
    cout<<"Total rainfall for the year is: "<<totRain<<" inches."<<endl;
    cout<<"Average monthly rainfall is : "<<fixed<<setprecision(2)<<avgRain
            <<" inches/month."<<endl;
    cout<<"Maximum rainfall is Month "<<maxMon<<" with "<<maxRain<<" inches."
            <<endl;
    cout<<"Minimum rainfall is Month "<<minMon<<" with "<<minRain<<" inches."
            <<endl;
}

void prob3(){
    //Declare Variables
    const int SIZE=5;//Constant integer to define array size of 5
    string name[SIZE]={"Mild","Medium","Sweet","Hot","Zesty"};//Array for salsa names
    int sold[SIZE];//Array for jars of salsa sold
    string minSold,maxSold;
    int min,max,totSales=0;
    
    //Input values
    cout<<"This program will obtain sales data for five different types"<<endl;
    cout<<"of salsa, display total sales, and display the names of the"<<endl;
    cout<<"highest and lowest selling salsas.  Please enter all required"<<endl;
    cout<<"information when required."<<endl;
    
    for (int i=0;i<=SIZE-1;i++){//Input loop
        cout<<"Please enter the number of jars sold of "<<name[i]<<" salsa: ";
        cin>>sold[i];
        while (sold[i]<=0){
            cout<<"Please enter a positive number: ";
            cin>>sold[i];
            totSales+=sold[i];
        }
        totSales+=sold[i];//Total sales accumulator
    }
    
    //Process by mapping inputs to outputs
    min=max=sold[0];//Min-maxing loop
    minSold=maxSold=name[0];
    for (int j=0;j<=SIZE-1;j++){
        if (sold[j]<min){
            min=sold[j];
            minSold=name[j];
        }
        else if (sold[j]>max){
            max=sold[j];
            maxSold=name[j];
        }
    }
    //Output values
    cout<<endl;
    cout<<"Sales Report:"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"Name:          Sales:"<<endl;
    cout<<"---------------------"<<endl;
    for (int disp=0;disp<=SIZE-1;disp++){
        cout<<left<<setw(6)<<name[disp]<<"       "<<right<<setw(8)<<sold[disp]<<endl;
    }
    cout<<endl;
    cout<<"Total Sales: "<<totSales<<endl;
    cout<<"Highest Sales: "<<maxSold<<endl;
    cout<<"Lowest Sales:  "<<minSold<<endl;
}

void prob4(){
    //Set RNG seed
    srand(static_cast<int>(time(0)));
    //Declare Variables
    int size;//Array size
    int numbers[size];//Array
    int n;
    //Input values
    cout<<"This program contains a function that will fill an array with"<<endl;
    cout<<"random numbers and output all numbers greater than a user-defined n"
            <<endl;
    cout<<"Please enter all required information when requested."<<endl;
    
    //Process by mapping inputs to outputs
    larger(size,numbers,n);
}

//******************************************************************************
//                          Function: larger
//Description: Obtains size of array and number n, fills array with random
//             numbers and ouputs all numbers larger than n.
//Input: Array size, n
//Output: Numbers in array larger than n
//******************************************************************************
void larger(int size,int numbers[],int n){
    cout<<"Please enter the size of the array: ";
    cin>>size;
    cout<<"Please enter a number between 1-100: ";
    cin>>n;
    for(int i=0;i<=size-1;i++){//Fills array with random numbers 1-100
        numbers[i]=rand()%100+1;
    }
    cout<<"The numbers larger than "<<n<<" are: "<<endl;
    for(int j=0;j<=size-1;j++){//Compares and displays numbers larger than n
        if(numbers[j]>n){
         cout<<numbers[j]<<" ";   
        }
    }
    cout<<endl;
}

void prob5(){
    //Declare Variables
    const int ROWS=3;//Constant integers setting size for 2D array
    const int COLS=5;
    float amtFood[ROWS][COLS];//Array for amount of food fed
    float avgFood=0,minFood,maxFood,totFood=0;//Average food eaten, 
                                              //minimum/maximum eaten
    int total[ROWS]={0,0,0};//Array that stores total amount of food eaten per 
                            //monkey for week
    int minMonk,maxMonk;
    
    //Input values
    cout<<"This program will store the amount of food eaten per monkey during"
            <<endl;
    cout<<"the week and then will out put the average amount of food eaten per"
            <<endl;
    cout<<"day, and the minimum and maximum amounts of food eaten during the "
            "week."<<endl;
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
        for(int co=0;co<=COLS-1;co++){
            total[ro]+=amtFood[ro][co];
        }
    }
    minFood=maxFood=total[0];
    minMonk=maxMonk=1;
    for(int tot=0;tot<=ROWS-1;tot++){
        if(total[tot]<minFood){
            minFood=total[tot];
            minMonk=tot+1;
        }
        else if(total[tot]>maxFood){
            maxFood=total[tot];
            maxMonk=tot+1;
        }
    }
    //Output minimimum and maximum food eaten
    cout<<"The minimum weekly consumption is Monkey "<<minMonk<<" with "<<
            static_cast<int>(minFood)<<endl;
    cout<<"The maximum weekly consumption is Monkey "<<maxMonk<<" with "<<
            static_cast<int>(maxFood)<<endl;
}

void prob6(){
    //Declare Variables
    const int SIZE=7;
    string empId[SIZE]={"5658845","4520125","7895122","8777541","8451277",
        "1302850","7580489"};
    int hours[SIZE];
    float wages[SIZE],payRate[SIZE];
    
    //Input values
    cout<<"This program will calculate a worker's gross wages based on the"
            <<endl;
    cout<<"number of hours worked and their pay rate.  Please enter all"
            <<endl;
    cout<<"required information when requested."<<endl;
    cout<<endl;
    
    //Loop to obtain hours and hourly wage
    for(int num=0;num<=SIZE-1;num++){
        cout<<"Please enter the number of hours worked for employee "
                <<empId[num]<<": ";
        cin>>hours[num];
        while(hours[num]<=0){
            cout<<"Please enter a number greater than zero: ";
            cin>>hours[num];
        }
        cout<<"Please enter the hourly wage for employee "
                <<empId[num]<<": ";
        cin>>wages[num];
        while(wages[num]<=0){
            cout<<"Please enter a number greater than zero: ";
            cin>>wages[num];
        }
        cout<<endl;
        wages[num]=hours[num]*wages[num];
    }
    
    //Output values
    cout<<"Payroll Report:"<<endl;
    cout<<"Employee ID:        Total Wages:"<<endl;
    cout<<"--------------------------------"<<endl;
    for(int i=0;i<=SIZE-1;i++){
        cout<<empId[i]<<"              "<<fixed<<setprecision(2)<<wages[i]
                <<endl;
    }
}

void prob7(){
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
}

void prob8(){
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
    cout<<"and obtain their test scores.  It will then display their names"<<
            endl;
    cout<<"average test scores and overall letter grade.  Please enter"<<endl;
    cout<<"all required information when requested."<<endl;
    cout<<endl;
    cin.ignore();
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
        cout<<left<<setw(20)<<studnts[j]<<"     "<<right<<setw(6)<<fixed<<
                setprecision(2)<<average[j]<<"              "<<grades[j]<<endl;
    }
}

void prob9(){
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
}