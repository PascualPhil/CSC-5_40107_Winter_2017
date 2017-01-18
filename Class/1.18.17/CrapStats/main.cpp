/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 18, 2017, 11:00 AM
  Purpose:  Statistics for craps
 */

//System Libraries
#include <iostream>     //I/O lib
#include <cstdlib>      //RNG generator lib
#include <ctime>        //Time lib to set RNG seed
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
    //Set RNG seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned int nGames=1000000000;             //Number of games to be played
    unsigned int wins=0,losses=0,maxThrw=0; //Number of wins, losses, and average
                                            //number of throws
    unsigned int avgThrw=0;
    
    //Loop and take dice stats
    for(int game=1;game<=nGames;game++){
        //Call in RNG for dice
        char die1=rand()%6+1;   //Gives value from 1-6
        char die2=rand()%6+1;   //Gives value from 1-6 for die 2
        char sum=die1+die2;     //Sum of both dice
        unsigned int cntThrw=1;
        avgThrw++;
        //Now determine wins or losses
        switch(sum){
            case 2:case 3:case 12:losses++;break;
            case 7:case 11:wins++;break;
            default:{
            bool kpThrw=true;
            do{
                die1=rand()%6+1;            //Gives value from 1-6
                die2=rand()%6+1;            //Gives value from 1-6 for die 2
                char sumAgn=die1+die2;      //Sum of both dice
                avgThrw++;cntThrw++;
                if(sumAgn==7){
                    losses++;
                    kpThrw=false;
                }else if(sumAgn==sum){
                    wins++;
                    kpThrw=false;
                }
            }while(kpThrw);
        }
        if(maxThrw<cntThrw)maxThrw=cntThrw;
            }
    }
    //Output values
    cout<<"The total number of Craps games played is: "<<nGames<<endl;
    cout<<"The total number of wins is: "<<wins<<endl;
    cout<<"The total number of losses is: "<<losses<<endl;
    cout<<"The total number of Craps games played is: "<<wins+losses<<endl;
    cout<<"Percentage wins: "<<100.0f*wins/nGames<<"%"<<endl;
    cout<<"Percentage losses: "<<100.0f*losses/nGames<<"%"<<endl;
    cout<<"Average number of throws per game: "
            <<static_cast<float>(avgThrw)/nGames<<" throws"<<endl;
    cout<<"Maximum number of throws in a game: "<<maxThrw<<" throws"<<endl;
    //Exit stage right!
    return 0;
}