/* 
  File:   main.cpp
  Author: Phillip Pascual
  Created on January 19, 2017, 12:40 PM
  Purpose:  Statistics for craps version 2
 */

//System Libraries
#include <iostream>     //I/O lib
#include <cstdlib>      //RNG generator lib
#include <ctime>        //Time lib to set RNG seed
#include <iomanip>
#include <fstream>      //File stream library

using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const short PERCENT=100;        //Percentage conversion

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set RNG seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Instantiate open files
    ifstream in;
    ofstream out;
    in.open("numberofgames.dat");
    out.open("resultsofgames.dat");
    
    
    //Declare Variables
    unsigned int nGames=10000;             //Number of games to be played
    unsigned int wins=0,losses=0,maxThrw=0; //Number of wins, losses, and average
                                            //number of throws
    unsigned int avgThrw=0;
    
    //Input the number of games
    //Last line will be number of games
    while(in>>nGames);
    nGames=nGames>1e6?1e5:nGames;
    
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
    out<<"The total number of Craps games played is: "<<nGames<<endl;
    out<<"The total number of wins is: "<<wins<<endl;
    out<<"The total number of losses is: "<<losses<<endl;
    out<<"The total number of Craps games played is: "<<wins+losses<<endl;
    out<<"Percentage wins: "
            <<static_cast<float>(PERCENT)*wins/nGames<<"%"<<endl;
    out<<"Percentage losses: "
            <<static_cast<float>(PERCENT)*losses/nGames<<"%"<<endl;
    out<<"Average number of throws per game: "
            <<static_cast<float>(avgThrw)/nGames<<" throws"<<endl;
    out<<"Maximum number of throws in a game: "<<maxThrw<<" throws"<<endl;
    //Exit stage right!
    in.close();
    out.close();
    return 0;
}