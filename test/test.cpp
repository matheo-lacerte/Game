#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <windows.h>
#include <fstream>
#include <string>
#include <iomanip>
#include "Function.h"
#include "Stats.h"
#include "FileEncrypt.h"
#include "FileDecrypt.h"
#include "AdminPanel.h"
#include <conio.h>
#include <stdlib.h>
using namespace std;

#pragma warning(disable : 4996)





int main() {
    // lol


    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    bool buy = true;
    int m = 0;
    HANDLE  hConsole;
    int k;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof(cfi);
    cfi.nFont = 0;
    cfi.dwFontSize.X = 0;                   // Width of each character in the font
    cfi.dwFontSize.Y = 35;                  // Height
    cfi.FontFamily = FF_DONTCARE;
    cfi.FontWeight = FW_NORMAL;
    std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

    ::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
    srand(time(NULL));

    int coins;
    double money;
    Decrypt();
    ifstream infile("DATA.txt");

    if (infile.fail()) {
        cerr << "failed to open\n";
        return 1;
    }
    while (infile.good())
    {
        infile >> coins >> money >> m >> buy >> gCoins >> lCoins >> mSpent >> mGain >> pTimes >> cPurchased >> tWon >> tLost;
        infile >> HighestBet >> smallestBet >> jackpot;
    }
    Encrypt();
    int coinIn; //Les coin(s) inserer
    const short facteur = 9; //9
    for (;;) {
        for (;;) {
            SetConsoleTextAttribute(hConsole, 7);
            system("CLS");
            cout << "You have: " << coins << " coin(s)" << endl << "and " << money << "$ \n\n\n\n";
            cout << "Enter the number of coins you want to insert." << endl;

            cin >> coinIn;
            if (coinIn == -666) {
                string PW;
                system("CLS");
                cout << "Please enter the password: " << endl;
                cin >> PW;
                if (PW == "Admin123") {
                    Decrypt();
                    adPanel();

                    ifstream infile("DATA.txt");

                    if (infile.fail()) {
                        cerr << "failed to open\n";
                        return 1;
                    }
                    while (infile.good())
                    {
                        infile >> coins >> money >> m >> buy >> gCoins >> lCoins >> mSpent >> mGain >> pTimes >> cPurchased >> tWon >> tLost;
                        infile >> HighestBet >> smallestBet >> jackpot;
                    }
                    Encrypt();
                }
            }

            if (coins < coinIn || coinIn < 0) {
                cout << "You do not possess enough coin(s)" << endl;
                continue;
            }
            else if (coins >= coinIn) {
                break;

            }
        }
        coins = coins - coinIn;
        for (;;) {
            system("CLS");
            cout << "You have: " << coins << " coin(s) \n\n\n\n";
            cout << "you have inserted: " << coinIn << " coin(s) \n\n" << "press 1 when you are ready." << endl;

            if (HighestBet < coinIn) {
                HighestBet = coinIn;
            }
            if (smallestBet > coinIn) {
                smallestBet = coinIn;
            }
            int Pressed;
            cin >> Pressed;
            if (Pressed != 1)
            {
                continue;
            }
            else {
                break;
            }
        }

        for (;;) {
            system("CLS");
            cout << "You have " << coins << " coins and " << money << "$ \n\n\n\n";
            for (int i = 0; i < 22; i++) {
                system("CLS");
                cout << "You have " << coins << " coins and " << money << "$ \n\n\n" << endl;
                SetConsoleTextAttribute(hConsole, 12);
                if (i < 9) {
                    n1 = rand() % facteur + 1;
                }
                if (i < 15) {
                    n2 = rand() % facteur + 1;
                }
                n3 = rand() % facteur + 1;



                Bn1 = n1 - 1;
                Bn2 = n2 - 1;
                Bn3 = n3 - 1;

                NombreCasinoPrint();

                _sleep(350);
                SetConsoleTextAttribute(hConsole, 7);
            }
            pTimes = pTimes + 1;
            if (n1 == n2 && n2 == n3) {
                if (n1 == 7 || n1 == 3 && n2 == 3 || n1 == 1 && n2 == 1 || n1 == 9 && n2 == 9 || n1 == 4 && n2 == 4 || n1 == 6 && n2 == 6) {
                    if (n1 == 7) {
                        jackpot = jackpot + 1;
                    }
                    system("CLS");
                    cout << "You have " << coins << " coins and " << money << "$ \n\n\n\n";
                    SetConsoleTextAttribute(hConsole, 2);
                    NombreCasinoPrint();
                }
            }
            else if (n1 == n2 || n2 == n3) {

                if (n1 == 3 && n2 == 3 || n1 == 1 && n2 == 1 || n1 == 9 && n2 == 9 || n1 == 4 && n2 == 4 || n1 == 6 && n2 == 6) {
                    system("CLS");
                    cout << "You have " << coins << " coins and " << money << "$ \n\n\n\n";
                    NombreCasinoPrintDroite();
                }
                else if (n3 == 3 && n2 == 3 || n3 == 1 && n2 == 1 || n3 == 9 && n2 == 9 || n3 == 4 && n2 == 4 || n3 == 6 && n2 == 6) {
                    system("CLS");
                    cout << "You have " << coins << " coins and " << money << "$ \n\n\n\n";
                    NombreCasinoPrintGauche();
                }
            }

            SetConsoleTextAttribute(hConsole, 7);
            int coinsBeforeWin = 0;
            coinsBeforeWin = coins;
            if (buy != true) {
                m = m - 1;
            }
            if (m == 0) {
                buy = true;
            }



            cout << endl << "| press 1 to replay(-" << coinIn << " coins)" << endl << "| press 2 to double(-" << coinIn * 2 << "coins)" << endl << "| press 3 to enter a custom amount" << endl << "| press 4 to echange it to real money" << endl;
            if (buy == true) {
                cout << "| press 5 to buy coin(s)" << endl;
            }
            else if (buy != true) {
                cout << "| press 5 to buy coin(s) *Please bet " << m << " more times to be able to buy again, thank you.*" << endl;
            }
            cout << "| press 6 to see your stats" << endl << "\n";
            cout << "  777: " << coinIn * 2000 << " coins" << endl
                << "  999: " << coinIn * 200 << " coins |" << "  x99 or 99x: " << coinIn * 100 << " coins" << endl
                << "  666: " << coinIn * 75 << " coins |" << "  x66 or 66x: " << coinIn * 50 << " coins" << endl
                << "  333: " << coinIn * 45 << " coins |" << "  x33 or 33x: " << coinIn * 25 << " coins" << endl
                << "  444: " << coinIn * 15 << " coins |" << "  x44 or 44x: " << coinIn * 10 << " coins" << endl
                << "  111: " << coinIn * 5 << " coins |" << "  x11 or 11x: " << coinIn * 2 << " coins \n";
            bool win = false;
            //Prize ---------------------------------
            if (n1 == 7 && n2 == 7 && n3 == 7) {
                coins = coins + (coinIn * 2000);
                win = true;
            }

            if (n1 == 9 && n2 == 9 && n3 == 9) {
                coins = coins + (coinIn * 200);
                win = true;
            }
            else if ((n1 == 9 && n2 == 9) || (n2 == 9 && n3 == 9)) {
                coins = coins + (coinIn * 100);
                win = true;
            }

            if (n1 == 6 && n2 == 6 && n3 == 6) {
                coins = coins + (coinIn * 75);
                win = true;
            }
            else if ((n1 == 6 && n2 == 6) || (n2 == 6 && n3 == 6)) {
                coins = coins + (coinIn * 50);
                win = true;
            }

            if (n1 == 3 && n2 == 3 && n3 == 3) {
                coins = coins + (coinIn * 45);
                win = true;
            }
            else if ((n1 == 3 && n2 == 3) || (n2 == 3 && n3 == 3)) {
                coins = coins + (coinIn * 25);
                win = true;
            }

            if (n1 == 4 && n2 == 4 && n3 == 4) {
                coins = coins + (coinIn * 15);
                win = true;
            }
            else if ((n1 == 4 && n2 == 4) || (n2 == 4 && n3 == 4)) {
                coins = coins + (coinIn * 10);
                win = true;
            }

            if (n1 == 1 && n2 == 1 && n3 == 1) {
                coins = coins + (coinIn * 5);
                win = true;
            }
            else if ((n1 == 1 && n2 == 1) || (n2 == 1 && n3 == 1)) {
                coins = coins + (coinIn * 2);
                win = true;
            }
            // end of prize----------------------------------------
            if (win == true) {
                gCoins = gCoins + (coins - coinsBeforeWin);
                cout << "You won! You got " << coins - coinsBeforeWin << " coin(s)" << endl << "You have " << coins << " coins" << endl;
                // Create and open a text file
                Decrypt();
                tWon = tWon + 1;
                ofstream MyFile("DATA.txt");

                // Write to the file
                MyFile << coins << endl << money << endl << m << endl << buy << endl << gCoins << endl << lCoins << endl << mSpent << endl << mGain << endl << pTimes << endl << cPurchased << endl << tWon << endl;
                MyFile << tLost << endl << HighestBet << endl << smallestBet << endl << jackpot << endl;


                // Close the file
                MyFile.close();
                Encrypt();
            }
            else {
                lCoins = lCoins - coinIn;
                Decrypt();

                cout << "You lost! You now have " << coins << " coin(s)" << endl;
                tLost = tLost + 1;
                // Create and open a text file
                ofstream MyFile("DATA.txt");

                // Write to the file
                MyFile << coins << endl << money << endl << m << endl << buy << endl << gCoins << endl << lCoins << endl << mSpent << endl << mGain << endl << pTimes << endl << cPurchased << endl << tWon << endl;
                MyFile << tLost << endl << HighestBet << endl << smallestBet << endl << jackpot << endl;

                // Close the file
                MyFile.close();
                Encrypt();
            }





            double Pressed;
            cin >> Pressed;
            if (Pressed == 1) {

                if (coins >= coinIn) {
                    coins = coins - coinIn;
                    continue;
                }
                else {
                    cout << "invalide amount of coins." << endl;
                    _sleep(3000);
                    break;
                }
            }
            else if (Pressed == 2) {
                if (coins >= (coinIn * 2)) {
                    coins = coins - coinIn * 2;
                    coinIn = coinIn * 2;
                    continue;
                }
                else {
                    cout << "invalide amount of coins." << endl;
                    _sleep(3000);
                    break;
                }
            }
            else if (Pressed == 3) {
                cout << "Please insert your desired amount of coin(s)" << endl;
                cin >> coinIn;
                if (HighestBet < coinIn) {
                    HighestBet = coinIn;
                }
                if (smallestBet > coinIn) {
                    smallestBet = coinIn;
                }
                if (coins >= coinIn) {
                    coins = coins - coinIn;
                    continue;
                }
                else {
                    cout << "invalide amount of coins." << endl;
                    _sleep(3000);
                    break;
                }

            } if (Pressed == 4) {
                system("CLS");
                cout << "The exchange rate is 100,000 coins for 1$ \n" << endl;
                cout << "You have " << coins << " coins and " << money << "$ \n\n\n";
                cout << "please enter the amount of coins that you want to exchange(Min 100,000coins) \n\n";
                int EX;


                cin >> EX;
                if (EX <= coins) {
                    if (EX >= 100000) {
                        money = money + (EX * 0.00001);
                        mGain = mGain + (EX * 0.00001);
                        coins = coins - EX;
                        // Create and open a text file
                        Decrypt();
                        ofstream MyFile("DATA.txt");

                        // Write to the file
                        MyFile << coins << endl << money << endl << m << endl << buy << endl << gCoins << endl << lCoins << endl << mSpent << endl << mGain << endl << pTimes << endl << cPurchased << endl << tWon << endl;
                        MyFile << tLost << endl << HighestBet << endl << smallestBet << endl << jackpot << endl;


                        // Close the file
                        MyFile.close();
                        Encrypt();
                        cout << "You have " << money << "$" << endl;
                        _sleep(5000);
                        break;
                    }
                }

            }
            if (Pressed == 5 && m == 0 && buy == true) {
                system("CLS");
                cout << "You have " << coins << " coins and " << money << "$ \n\n\n";
                cout << "for every 10 dollars you get 10,000 coins \n\n" << "please enter the amount of money you want to exchange (Note that the maximum is 500$ and the minimum is 10$): " << endl;
                int EXM;
                cin >> EXM;
                if (EXM <= money) {
                    if (EXM >= 10 && EXM <= 500) {
                        coins = coins + (10000 * (EXM / 10));
                        cPurchased = cPurchased + (10000 * (EXM / 10));
                        mSpent = mSpent + EXM;
                        money = money - EXM;
                        m = m + 5;
                        buy = false;
                        // Create and open a text file
                        Decrypt();
                        ofstream MyFile("DATA.txt");

                        // Write to the file
                        MyFile << coins << endl << money << endl << m << endl << buy << endl << gCoins << endl << lCoins << endl << mSpent << endl << mGain << endl << pTimes << endl << cPurchased << endl << tWon << endl;
                        MyFile << tLost << endl << HighestBet << endl << smallestBet << endl << jackpot << endl;;


                        // Close the file
                        MyFile.close();
                        Encrypt();
                        cout << "You have " << coins << " coins" << endl;
                        _sleep(5000);


                        break;
                    }
                    cout << "You do not have the money for this purchase :(" << endl;
                    _sleep(5000);
                    break;
                }


                cout << "You do not have the money for this purchase :(" << endl;
                _sleep(5000);
                break;
            }
            if (Pressed == 6) {
                STATS();
                _sleep(10000);
                system("pause");
                break;
            }
        }
    }
    return 0;
}