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
    srand(static_cast<unsigned int>(time(0)));       //Sets RNG seed based on system time
    
    //Declare Variables
    //Ints for first/second player card, first/second dealer card, additional
    //player cards, additional dealer cards, player/dealer score, and number of games to play
    unsigned int p1,pp1,p2,pp2,pAdd,d1,dd1,d2,dd2,dAdd,choice,pScore,dScore,games;
    //String to display cards
    string pCards,dCards;
            
    //Program description and input of number of games
    cout<<"Welcome to Blackjack!"<<endl;
    cout<<"You will play a game of blackjack against a computer dealer.  The object"<<endl;
    cout<<"of the game is to make a hand that beats the dealer's hand without going"<<endl;
    cout<<"over 21.  The dealer will stand on any hand worth 17 or above."<<endl;
    cout<<endl;
    cout<<"How many games would you like to play? ";
    cin>>games;
    cout<<endl;
    
    for(int num=1;num<=games;num++){
    //Deal player cards
    p1=pp1=rand()%13+2;         //Generates random number between 2-14 for card 1
    pCards=' ';
    dCards=' ';
    //Corresponds random number to player card 2-A
    switch(p1){
        case 2:pCards+="2 ";break;
        case 3:pCards+="3 ";break;
        case 4:pCards+="4 ";break;
        case 5:pCards+="5 ";break;
        case 6:pCards+="6 ";break;
        case 7:pCards+="7 ";break;
        case 8:pCards+="8 ";break;
        case 9:pCards+="9 ";break;
        case 10:{pCards+="10 ";p1=10;}break;
        case 11:{pCards+="J ";p1=10;}break;
        case 12:{pCards+="Q ";p1=10;}break;
        case 13:{pCards+="K ";p1=10;}break;
        case 14:{pCards+="A ";p1=13;}break;
        default:cout<<"Bad p1";break;
    }
    if(pp1<=13&&pp1>=10){
        p1=10;
    }
    else if(pp1==14){
        p1=11;
    }
    p2=pp2=rand()%13+2;     //Generates random number between 2-14 for card 2
    switch(p2){
        case 2:pCards+="2 ";break;
        case 3:pCards+="3 ";break;
        case 4:pCards+="4 ";break;
        case 5:pCards+="5 ";break;
        case 6:pCards+="6 ";break;
        case 7:pCards+="7 ";break;
        case 8:pCards+="8 ";break;
        case 9:pCards+="9 ";break;
        case 10:{pCards+="10 ";p2=10;}break;
        case 11:{pCards+="J ";p2=10;}break;
        case 12:{pCards+="Q ";p2=10;}break;
        case 13:{pCards+="K ";p2=10;}break;
        case 14:{pCards+="A ";p2=13;}break;
        default:cout<<"Bad p2";break;
    }
    if(pp2<=13&&pp2>=10){
        p2=10;
    }
    else if(pp2==14){
        p2=11;
    }
    if(pp1==14&&pp2==14){
        p1=11;
    }
    pScore=p1+p2;
    cout<<"Your first two cards are:"<<pCards<<"= "<<pScore;
    cout<<endl;
    //Deal first dealer card
    d1=dd1=rand()%13+2;             //RNG generates random number 2-14
    switch(d1){
        case 2:dCards+="2 ";break;
        case 3:dCards+="3 ";break;
        case 4:dCards+="4 ";break;
        case 5:dCards+="5 ";break;
        case 6:dCards+="6 ";break;
        case 7:dCards+="7 ";break;
        case 8:dCards+="8 ";break;
        case 9:dCards+="9 ";break;
        case 10:{dCards+="10 ";d1=10;}break;
        case 11:{dCards+="J ";d1=10;}break;
        case 12:{dCards+="Q ";d1=10;}break;
        case 13:{dCards+="K ";d1=10;}break;
        case 14:{dCards+="A ";d1=11;}break;
    }
    if(d1<=13&&d1>=10){
        p1=10;
    }
    else if(d1==14){
        d1=11;
    }
    cout<<"The dealer's hand shows a"<<dCards<<endl;
    cout<<endl;
    //Obtain decision from player on whether to hit or stand
    cout<<"Please enter 1 to hit, 2 to stand: ";
    cin>>choice;
    while(choice!=1&&choice!=2){
        cout<<"Please enter a valid number (1 or 2): ";
        cin>>choice;
    }
    //If player chooses to hit
    if(choice==1){
        //Deal additional player cards
        bool deal=1;         //Boolean allowing program to deal additional cards
        do{
            pAdd=rand()%13+2;   //Generates random number 2-14
            switch(pAdd){
                case 2:pCards+="2 ";break;
                case 3:pCards+="3 ";break;
                case 4:pCards+="4 ";break;
                case 5:pCards+="5 ";break;
                case 6:pCards+="6 ";break;
                case 7:pCards+="7 ";break;
                case 8:pCards+="8 ";break;
                case 9:pCards+="9 ";break;
                case 10:{pCards+="10 ";pAdd=10;}break;
                case 11:{pCards+="J ";pAdd=10;}break;
                case 12:{pCards+="Q ";pAdd=10;}break;
                case 13:{pCards+="K ";pAdd=10;}break;
                case 14:{pCards+="A ";pAdd=11;}break;
            }
            pScore+=pAdd;
            if (pAdd==11&&pScore>=22){
                pScore-=10;
            }
            cout<<"The dealer gives you a card.  Your hand is now"<<pCards<<"= "<<pScore<<endl;
            if(pScore>21){
                cout<<"Your score is over 21, you bust!"<<endl;
                deal=0;
            }
            else{
                cout<<"Please enter 1 to hit, 2 to stand: ";
                cin>>choice;
                while(choice!=1&&choice!=2){
                    cout<<"Please enter a valid number (1 or 2): ";
                    cin>>choice;
                }
                if (choice==2){
                    deal=0;
                }
            }
        }while (deal);
    }
    //When player chooses to stand
    if (choice==2) {
        bool dStand=false;
        do{
            //Deal dealer's hole card
            d2=dd2=rand()%13+2;     //Generates random number 2-14
            switch(d2){
            case 2:dCards+="2 ";break;
            case 3:dCards+="3 ";break;
            case 4:dCards+="4 ";break;
            case 5:dCards+="5 ";break;
            case 6:dCards+="6 ";break;
            case 7:dCards+="7 ";break;
            case 8:dCards+="8 ";break;
            case 9:dCards+="9 ";break;
            case 10:{dCards+="10 ";d2=10;}break;
            case 11:{dCards+="J ";d2=10;}break;
            case 12:{dCards+="Q ";d2=10;}break;
            case 13:{dCards+="K ";d2=10;}break;
            case 14:{dCards+="A ";d2=11;}break;
            }
            if(dd2<=13&&dd2>=10){
            d2=10;
            }
            else if(dd2==14){
                p2=11;
            }
            if(dd1==14&&dd2==14){
                d1=11;
            }
        }while (dStand);
        dScore=d1+d2;
        cout<<"The dealer turns over his hole card.  His hand is now"<<dCards<<"= "<<dScore<<endl;
        dStand=0;
        if(dScore<17){
            cout<<"Dealer has under 17 and needs to hit again..."<<endl;
            dStand=1;
        }
        else if(dScore>=17){
            cout<<"Dealer has 17 or over and stands.";
            dStand=1;
        }

        //Dealer needs to deal additional cards to himself if less than or equal to 17
        while(dScore<17){
            //Deal additional dealer cards
            dAdd=rand()%13+2;
            switch(dAdd){
                case 2:dCards+="2 ";break;
                case 3:dCards+="3 ";break;
                case 4:dCards+="4 ";break;
                case 5:dCards+="5 ";break;
                case 6:dCards+="6 ";break;
                case 7:dCards+="7 ";break;
                case 8:dCards+="8 ";break;
                case 9:dCards+="9 ";break;
                case 10:{dCards+="10 ";dAdd=10;}break;
                case 11:{dCards+="J ";dAdd=10;}break;
                case 12:{dCards+="Q ";dAdd=10;}break;
                case 13:{dCards+="K ";dAdd=10;}break;
                case 14:{dCards+="A ";dAdd=11;}break;
            }
                if(dAdd<=13&&dAdd>=10){
                        dAdd=10;
                }
                    else{ 
                        if(dAdd==14&&dScore>=12){
                        dAdd=1;
                        }
                    }
            dScore+=dAdd;
            cout<<"The dealer deals himself another card.  His hand is now"<<dCards<<"= "<<dScore<<endl;
            if(dScore<=17){
                cout<<"The dealer is still under 17 and needs to hit again..."<<endl;
            }
            else if (dScore>21){
                cout<<"The dealer busts!"<<endl;
            }
        }
    }
    cout<<endl;
    //Compare player and dealer scores and determine the winner
    if((pScore>dScore)||dScore>21){
        cout<<"Congratulations! You win!"<<endl;
    }
    else if ((pScore<dScore)||pScore>21){
        cout<<"Sorry, you lose."<<endl;
    }
    else
        cout<<"A push, nobody wins."<<endl;
    }
    //Exit stage right!
    return 0;
}