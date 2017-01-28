/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 27, 2017, 5:00 PM
  Purpose:  Project 1 - Simple Blackjack Program
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
    unsigned int p1,p2,d1,d2,pTotal,dTotal,
            pp1,pp2,dd1,dd2;
    string pCards,dCards;
    char choice;
    
    //Program description
    cout<<"Welcome to Blackjack!"<<endl;
    cout<<"You will play a game of blackjack against a computer dealer.  The object"<<endl;
    cout<<"of the game is to make a hand that beats the dealer's hand, without going over"<<endl;
    cout<<"21."<<endl;
    
    //Dealing the cards, dealer first, then alternating with player
    dd1=d1=rand()%13+1;       //Generates random number 1-13
    pp1=p1=rand()%13+1;       
    dd2=d2=rand()%13+1;
    pp2=p2=rand()%13+1;
    
    //Generates card for output based on RNG and adds opening hand values
    //Player cards
    switch (p1){
        case 1:pCards+="2 ";break;
        case 2:pCards+="3 ";break;
        case 3:pCards+="4 ";break;
        case 4:pCards+="5 ";break;
        case 5:pCards+="6 ";break;
        case 6:pCards+="7 ";break;
        case 7:pCards+="8 ";break;
        case 8:pCards+="9 ";break;
        case 9:pCards+="10 ";break;
        case 10:pCards+="J ";break;
        case 11:pCards+="Q ";break;
        case 12:pCards+="K ";break;
        case 13:pCards+="A ";break;
    }
    if (p1<=9&&p1>=1){
        p1+=1;
    }
        else if (p1>=10&&p1<13){
            p1=10;
        }
        else {
            p1=11;
        }
    //Second player card
    switch (p2){
        case 1:pCards+="2 ";break;
        case 2:pCards+="3 ";break;
        case 3:pCards+="4 ";break;
        case 4:pCards+="5 ";break;
        case 5:pCards+="6 ";break;
        case 6:pCards+="7 ";break;
        case 7:pCards+="8 ";break;
        case 8:pCards+="9 ";break;
        case 9:pCards+="10 ";break;
        case 10:pCards+="J ";break;
        case 11:pCards+="Q ";break;
        case 12:pCards+="K ";break;
        case 13:pCards+="A ";break;
    }
    if (p2<=9&&p2>=1){
        p2+=1;
    }
        else if (p2>=10&&p2<13){
        p2=10;
        }
    if (p1==13){
        if (p2<10){
            p1=11;
        }
    }
    if (p2==13){
        p2=11;
    }
    if(pp1==13&&pp2==13){
        p1=1;
    }
    pTotal=p1+p2;
    //Dealer cards
    switch (d1){
        case 1:dCards+="2 ";break;
        case 2:dCards+="3 ";break;
        case 3:dCards+="4 ";break;
        case 4:dCards+="5 ";break;
        case 5:dCards+="6 ";break;
        case 6:dCards+="7 ";break;
        case 7:dCards+="8 ";break;
        case 8:dCards+="9 ";break;
        case 9:dCards+="10 ";break;
        case 10:dCards+="J ";break;
        case 11:dCards+="Q ";break;
        case 12:dCards+="K ";break;
        case 13:dCards+="A ";break;
    }
    if (d1<=9&&d1>=1){
        d1+=1;
    }
        else if (d1>=10&&d1<13){
            d1=10;
        }
        else {
            d1=11;
        }
    //Second dealer card
    switch (d2){
        case 1:dCards+="2 ";break;
        case 2:dCards+="3 ";break;
        case 3:dCards+="4 ";break;
        case 4:dCards+="5 ";break;
        case 5:dCards+="6 ";break;
        case 6:dCards+="7 ";break;
        case 7:dCards+="8 ";break;
        case 8:dCards+="9 ";break;
        case 9:dCards+="10 ";break;
        case 10:dCards+="J ";break;
        case 11:dCards+="Q ";break;
        case 12:dCards+="K ";break;
        case 13:dCards+="A ";break;
    }
    if (d2<=9&&d2>=1){
        d2+=1;
    }
        else if (d2>=10&&d2<13){
        d2=10;
        }
    if (d1==13){
        if (d2<10){
            d1=11;
        }
    }
    if (d2==13){
        d2=11;
    }
    if(dd1==13&&dd2==13){
        d1=1;
    }
    dTotal=d1+d2;
    
    //Output cards in player hand
    cout<<"Your hand is "<<pCards<<"= "<<pTotal<<endl;
    cout<<endl;
    //Output cards in dealer hand, hiding hole card
    cout<<"The dealer is showing a "<<d2<<endl;
    cout<<endl;
    //Player decides whether to hit or stand.
    cout<<"Would you like to [H]it or [S]tand? ";
    cin>>choice;
    while(choice!='H'&&choice!='h'&&choice!='S'&&choice!='s'){
        cout<<"Would you like to [H]it or [S]tand? ";
        cin>>choice;
    }
    //If player chooses to hit
    if(choice=='H'||choice=='h') {
        int pAdd=0;
        //Draws the next player card
        pAdd=rand()%13+1;
        switch(pAdd){
            case 1:pCards+="2 ";break;
            case 2:pCards+="3 ";break;
            case 3:pCards+="4 ";break;
            case 4:pCards+="5 ";break;
            case 5:pCards+="6 ";break;
            case 6:pCards+="7 ";break;
            case 7:pCards+="8 ";break;
            case 8:pCards+="9 ";break;
            case 9:pCards+="10 ";break;
            case 10:pCards+="J ";break;
            case 11:pCards+="Q ";break;
            case 12:pCards+="K ";break;
            case 13:pCards+="A ";break;
        }
        if (pAdd<=9&&pAdd>=1){
            pAdd+=1;
        }
            else if (pAdd>=10&&pAdd<13){
                pAdd=10;
            }
            else if (pAdd==13&&pTotal<=10){
                pAdd=11;
            }
            else {
                pAdd=1;
            }
        pTotal+=pAdd;
        //Accounts for ace already in first or second cards dealt
        if(pTotal>=12&&(pp1==13||pp2==13)){
            pTotal-=10;
            pp1++;
            pp2++;
        }
        cout<<"Your hand is now "<<pCards<<"= "<<pTotal<<endl;
        if(pTotal>21){
            cout<<"Sorry, you BUST!"<<endl;
            return 0;
        }
        else{
        cout<<"Would you like to [H]it or [S]tand? ";
        cin>>choice;
        }
        while(choice!='H'&&choice!='h'&&choice!='S'&&choice!='s'){
            cout<<"Please choose H or S: ";
            cin>>choice;
        }
    }
    if(choice=='S'||choice=='s'){
        int dAdd=0;     //Initializes dealer's additional cards
        //First additional card for dealer
        cout<<"The dealer's hand is "<<dCards<<"= "<<dTotal;
        cout<<endl;
        cout<<"Press ENTER to deal the next card";
        cin.ignore();
        cin.get();
        bool deal=true; //Initialize deal boolean for following do-while loop
        //Deals additional cards for dealer
        do{
            dAdd=rand()%13+1;
            switch(dAdd){
                case 1:dCards+="2 ";break;
                case 2:dCards+="3 ";break;
                case 3:dCards+="4 ";break;
                case 4:dCards+="5 ";break;
                case 5:dCards+="6 ";break;
                case 6:dCards+="7 ";break;
                case 7:dCards+="8 ";break;
                case 8:dCards+="9 ";break;
                case 9:dCards+="10 ";break;
                case 10:dCards+="J ";break;
                case 11:dCards+="Q ";break;
                case 12:dCards+="K ";break;
                case 13:dCards+="A ";break;
            }
            if (dAdd<=9&&dAdd>=1){
                dAdd+=1;
            }
                else if (dAdd>=10&&dAdd<13){
                    dAdd=10;
                }
                else if (dAdd==13&&dTotal<=10){
                    dAdd=11;
                }
                else {
                    dAdd=1;
                }
            dTotal+=dAdd;
            //Accounts for ace already in first or second cards dealt
            if(dTotal>=12&&(dd1==13||dd2==13)){
                dTotal-=10;
                dd1++;
                dd2++;
            }
            cout<<"The dealer's hand is now "<<dCards<<"= "<<dTotal<<endl;
            if(dTotal>21){
                cout<<"The dealer BUSTS, you win!"<<endl;
                deal=false;
                return 0;
            }
            else {
            cout<<"Press ENTER to deal the next card";
            cin.get();
            }
        }while(deal=true);
    }
    //Output values

    //Exit stage right!
    return 0;
}