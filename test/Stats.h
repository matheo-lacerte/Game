#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <windows.h>
#include <fstream>
#include <string>
#include <iomanip>



using namespace std;


// Stats Variables
int lCoins; // lost coin
int gCoins; // gained coin

int mSpent; // money spent
int mGain; // money gain

int cPurchased; // purchased coins

int pTimes; // times played
int tWon;
int tLost;
int jackpot;
int HighestBet;
int smallestBet;
// End Stats Variables


void V2(){
    SetConsoleTextAttribute(hConsole, 2);
}

void R2(){
    SetConsoleTextAttribute(hConsole, 12);
}

void BLE(){
    SetConsoleTextAttribute(hConsole, 9);
}

    


void STATS(){


    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


    
    system ("CLS");

    cout << "---------------------------------------------------------Stats-------------------------------------------------------";


    cout << "-" << "\n\n\n" << endl;
    
    cout << "--------------Coins--------------" << endl;
   
    SetConsoleTextAttribute(hConsole, 2);
    cout << " " << "| Coins Gained: " << gCoins << " Coins" << endl;
 
    SetConsoleTextAttribute(hConsole, 12);
    cout << " " << "| Coins lost: " << lCoins << " Coins" << endl;
    SetConsoleTextAttribute(hConsole, 9);
    cout << " " << "| Coins Purchased: " << cPurchased << " Coins" << endl;
    if (gCoins > 0 && lCoins < 0) {
       SetConsoleTextAttribute(hConsole, 2);
        cout << " " << "| Total: " << (gCoins + lCoins) << endl;
    } else {
       SetConsoleTextAttribute(hConsole, 12);
        cout << " " << "| Total: " << (gCoins + lCoins) << endl;
    }
    SetConsoleTextAttribute(hConsole, 7);
    cout << "--------------Money--------------" << endl;
    SetConsoleTextAttribute(hConsole, 2);
    cout << " " << "| money Gained: " << mGain << "$" << endl;
    SetConsoleTextAttribute(hConsole, 12);
    cout << " " << "| money Spent: -" << mSpent << "$" << endl;

    SetConsoleTextAttribute(hConsole, 7);   
    cout << "----------Times played-----------" << endl;
    SetConsoleTextAttribute(hConsole, 9);
    cout << " " << "| Times played: " << pTimes << " Times" << endl;
    SetConsoleTextAttribute(hConsole, 2);
    cout << " " << "| Times Won: " << tWon << " Times" << endl;
    SetConsoleTextAttribute(hConsole, 12);
    cout << " " << "| Times Lost: " << tLost << " Times" << endl;
    SetConsoleTextAttribute(hConsole, 7);

    cout << "--------------Others--------------" << endl;
    SetConsoleTextAttribute(hConsole, 9);
    cout << " |";
    cout << " J";
    SetConsoleTextAttribute(hConsole, 10);
    cout << "a";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "c";
    SetConsoleTextAttribute(hConsole, 12);
    cout << "k"; 
    SetConsoleTextAttribute(hConsole, 13);
    cout << "p"; 
    SetConsoleTextAttribute(hConsole, 6);
    cout << "o";
    SetConsoleTextAttribute(hConsole, 9);
    cout << "t: " << jackpot << endl;
    SetConsoleTextAttribute(hConsole, 9);
    cout << " " << "| Highest bet: " << HighestBet << endl;
    SetConsoleTextAttribute(hConsole, 9);
    cout << " " << "| Smallest bet: " << smallestBet << endl;
    SetConsoleTextAttribute(hConsole, 7);


}