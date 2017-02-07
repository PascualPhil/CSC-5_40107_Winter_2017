/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on February 7, 2017, 12:30 PM
  Purpose:  Blackjack version 2 - Project 2
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const float PERCENT=100.0;          //Constant float for percentage conversion
const int SIZE=10;//Sets size of array

//Function Prototypes
void pDeal(string [],int &);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set RNG seed
    srand(static_cast<unsigned int>(time(0)));//Sets RNG seed
    
    //Instantiate and open files
    ifstream in;
    ofstream out;
    in.open("blackjackstats.txt");
    out.open("blackjackstats.txt");
    
    //Declare Variables
    string pCards[SIZE],dCards[SIZE],name;
    int stack=100,//Initial chip stack player has
                 bet;//Bet amount
    
    //Program description
    cout<<"Welcome to Blackjack!"<<endl;
    cout<<"You will play a game of blackjack against a computer dealer.  The "
            "object"<<endl;
    cout<<"of the game is to make a hand that beats the dealer's hand without "
            "going"<<endl;
    cout<<"over 21.  The dealer will stand on any hand worth 17 or above."
            <<endl;
    cout<<endl;
    cout<<"Please enter your name: ";
    cin>>name;
    in>>name;
    
    //Display initial chip stack.
    cout<<"Welcome "<<name<<".  You have "<<stack<<" chips to bet."<<endl;
    pDeal(pCards,stack);
    
    //Output values

    //Exit stage right!
    return 0;
}
void pDeal(string cards[],int &a){
    int bet;//Bet amount
    int total=0;
    int deal;
    cout<<"Please enter the amount that you would like to bet: ";
    cin>>bet;
    while (bet>a){
        cout<<"Please enter a bet lower than your current stack: ";
        cin>>bet;
    }
    //Generates first two cards for player
    for(int count=0;count<=1;count++){
        deal=total=rand()%13+2;//Generates random number between 2-14
        switch(total){
                case 2:cards[count]='2';break;
                case 3:cards[count]='3';break;
                case 4:cards[count]='4';break;
                case 5:cards[count]='5';break;
                case 6:cards[count]='6';break;
                case 7:cards[count]='7';break;
                case 8:cards[count]='8';break;
                case 9:cards[count]='9';break;
                //If RNG generates 10-K, score automatically set to add 10
                case 10:{cards[count]="10";total=10;}break; 
                case 11:{cards[count]='J';total=10;}break; 
                case 12:{cards[count]='Q';total=10;}break; 
                case 13:{cards[count]='K';total=10;}break;
                //If RNG generates A, score automatically set to add A 
                case 14:{cards[count]='A';total=11;}break; 
            }                                               
        total+=total;
        if (deal==14&&total==22)total-=10;
    }
    //Displays first two cards and total
    cout<<"Your first two cards are: ";
    for(int i=0;i<=1;i++){
        cout<<cards[i]<<" ";
    }
    cout<<"     Total: "<<total<<endl;
    
    
}