#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <windows.h>
#include <fstream>
#include <string>
#include <iomanip>

int coins;
int money;
int m;
bool buy;


using namespace std;

void adPanel(){
    int lCoins; // lost coin
int gCoins; // gained coin

int mSpent; // money spent
int mGain; // money gain

int cPurchased; // purchased coins

int pTimes; // times played
    ifstream infile("DATA.txt");
    if (infile.fail()){
        cerr << "failed to open\n";
    }
    while (infile.good())
    {
        infile >> coins >> money >> m >> buy >> gCoins >> lCoins >> mSpent >> mGain >> pTimes >> cPurchased;
    }




    cout << "choose what to edit: " << endl << "| 1.Coin" << endl << "| 2.money" << endl << "| 3.gCoins" << endl << "| 4.lCoins" << endl << "| 5.mSpent" << endl << "| 6.mGain" << endl << "| 7.pTimes" << endl << "| 8.cPurchase" << endl << "| 9.Reset everything" << endl << "| 10.Jackpot";
    int pressed;
    cin >> pressed;
    if (pressed == 1) {
        system("CLS");
        int coins;
        cin >> coins;
        ofstream MyFile("DATA.txt");
        // Write to the file
                MyFile << coins << endl << money << endl << m << endl << buy << endl << gCoins << endl << lCoins << endl << mSpent << endl << mGain << endl << pTimes << endl << cPurchased << endl << tWon << endl;
                        MyFile << tLost << endl << HighestBet << endl << smallestBet << endl << jackpot << endl;;
        // Close the file
        MyFile.close();
        system("pause");
    }
    if (pressed == 2) {
        system("CLS");
        int money;
        cin >> money;
        ofstream MyFile("DATA.txt");
        // Write to the file
                MyFile << coins << endl << money << endl << m << endl << buy << endl << gCoins << endl << lCoins << endl << mSpent << endl << mGain << endl << pTimes << endl << cPurchased << endl << tWon << endl;
                        MyFile << tLost << endl << HighestBet << endl << smallestBet << endl << jackpot << endl;;
        // Close the file
        MyFile.close();
        system("pause");
    }
    if (pressed == 3) {
        system("CLS");
        int gCoins;
        cin >> gCoins;
        ofstream MyFile("DATA.txt");
        // Write to the file
                MyFile << coins << endl << money << endl << m << endl << buy << endl << gCoins << endl << lCoins << endl << mSpent << endl << mGain << endl << pTimes << endl << cPurchased << endl << tWon << endl;
                        MyFile << tLost << endl << HighestBet << endl << smallestBet << endl << jackpot << endl;;
        // Close the file
        MyFile.close();
        system("pause");
    }
    if (pressed == 4) {
        system("CLS");
        int lCoins;
        cin >> lCoins;
ofstream MyFile("DATA.txt");
        // Write to the file
                MyFile << coins << endl << money << endl << m << endl << buy << endl << gCoins << endl << lCoins << endl << mSpent << endl << mGain << endl << pTimes << endl << cPurchased << endl << tWon << endl;
                        MyFile << tLost << endl << HighestBet << endl << smallestBet << endl << jackpot << endl;;
        // Close the file
        MyFile.close();
        system("pause");
    }
    if (pressed == 5) {
        system("CLS");
        int mSpent;
        cin >> mSpent;
        ofstream MyFile("DATA.txt");
        // Write to the file
                MyFile << coins << endl << money << endl << m << endl << buy << endl << gCoins << endl << lCoins << endl << mSpent << endl << mGain << endl << pTimes << endl << cPurchased << endl << tWon << endl;
                        MyFile << tLost << endl << HighestBet << endl << smallestBet << endl << jackpot << endl;;
        // Close the file
        MyFile.close();
        system("pause");
    }
    if (pressed == 6) {
        system("CLS");
        int mGain;
        cin >> mGain;
        ofstream MyFile("DATA.txt");
        // Write to the file
                MyFile << coins << endl << money << endl << m << endl << buy << endl << gCoins << endl << lCoins << endl << mSpent << endl << mGain << endl << pTimes << endl << cPurchased << endl << tWon << endl;
                        MyFile << tLost << endl << HighestBet << endl << smallestBet << endl << jackpot << endl;;
        // Close the file
        MyFile.close();
        system("pause");
    }
    if (pressed == 7) {
       system("CLS");
        int pTimes;
        cin >> pTimes;
        ofstream MyFile("DATA.txt");
        // Write to the file
                MyFile << coins << endl << money << endl << m << endl << buy << endl << gCoins << endl << lCoins << endl << mSpent << endl << mGain << endl << pTimes << endl << cPurchased << endl << tWon << endl;
                        MyFile << tLost << endl << HighestBet << endl << smallestBet << endl << jackpot << endl;;
        // Close the file
        MyFile.close();
        system("pause");
    }
    if (pressed == 8) {
        system("CLS");
        int cPurchased;
        cin >> cPurchased;
        ofstream MyFile("DATA.txt");
        // Write to the file
                MyFile << coins << endl << money << endl << m << endl << buy << endl << gCoins << endl << lCoins << endl << mSpent << endl << mGain << endl << pTimes << endl << cPurchased << endl << tWon << endl;
                        MyFile << tLost << endl << HighestBet << endl << smallestBet << endl << jackpot << endl;;
        // Close the file
        MyFile.close();
        system("pause");
    }
    if (pressed == 9) {
        system("CLS");
        coins = 1000;
        money = 10;
        gCoins = 0;
        lCoins = 0;
        mGain = 0;
        mSpent = 0;
        pTimes = 0;
        cPurchased = 0;
        m = 0;
        buy = true;
        tWon = 0;
        tLost = 0;
        smallestBet = 100000000;
        HighestBet = 0;
        jackpot = 0;
        ofstream MyFile("DATA.txt");
        // Write to the file
                MyFile << coins << endl << money << endl << m << endl << buy << endl << gCoins << endl << lCoins << endl << mSpent << endl << mGain << endl << pTimes << endl << cPurchased << endl << tWon << endl;
                        MyFile << tLost << endl << HighestBet << endl << smallestBet << endl << jackpot << endl;;
        // Close the file
        MyFile.close();
        system("pause");
    }
    if (pressed == 10) {
        system("CLS");
        cin >> jackpot;
        ofstream MyFile("DATA.txt");
        // Write to the file
                MyFile << coins << endl << money << endl << m << endl << buy << endl << gCoins << endl << lCoins << endl << mSpent << endl << mGain << endl << pTimes << endl << cPurchased << endl << tWon << endl;
                        MyFile << tLost << endl << HighestBet << endl << smallestBet << endl << jackpot << endl;;
        // Close the file
        MyFile.close();
        system("pause");
    }
}