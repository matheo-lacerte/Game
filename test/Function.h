#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <windows.h>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

HANDLE  hConsole;

void couleur(int a) {
    SetConsoleTextAttribute(hConsole, a);
}



string P11 = "...##...";  
string P21 = "..###...";  
string P31 = "...##...";  
string P41 = "...##...";  
string P51 = ".######.";
string P12 = "..####..";
string P22 = ".....##.";
string P32 = "..####..";
string P42 = ".##.....";
string P52 = ".######.";
string P13 = ".######.";
string P23 = "....##..";
string P33 = "...###..";
string P43 = ".....##.";
string P53 = ".#####..";
string P14 = ".....##.";
string P24 = ".##..##.";
string P34 = ".######.";
string P44 = ".....##.";
string P54 = ".....##.";
string P15 = ".######.";
string P25 = ".##.....";
string P35 = "..####..";
string P45 = ".....##.";
string P55 = ".#####..";
string P16 = "...##...";
string P26 = "..##....";
string P36 = ".#####..";
string P46 = ".##..##.";
string P56 = "..####..";
string P17 = ".######.";
string P27 = "....##..";
string P37 = "...##...";
string P47 = "..##....";
string P57 = ".##.....";
string P18 = "..####..";
string P28 = ".##..##.";
string P38 = "..####..";
string P48 = ".##..##.";
string P58 = "..####..";
string P19 = "..####..";
string P29 = ".##..##.";
string P39 = "..####..";
string P49 = "...##...";
string P59 = "..##....";



string P1[9] = {P11, P12, P13, P14, P15, P16, P17, P18, P19};
string P2[9] = {P21, P22, P23, P24, P25, P26, P27, P28, P29};
string P3[9] = {P31, P32, P33, P34, P35, P36, P37, P38, P39};
string P4[9] = {P41, P42, P43, P44, P45, P46, P47, P48, P49};
string P5[9] = {P51, P52, P53, P54, P55, P56, P57, P58, P59};


short Bn1;
short Bn2;
short Bn3;



void NombreCasinoPrint() {
    
    cout << setw(50) << P1[Bn1] << "   " << P1[Bn2] << "   " << P1[Bn3] << "   " << endl;
    cout << setw(50) << P2[Bn1] << "   " << P2[Bn2] << "   " << P2[Bn3] << "   " << endl;
    cout << setw(50) << P3[Bn1] << "   " << P3[Bn2] << "   " << P3[Bn3] << "   " << endl;
    cout << setw(50) << P4[Bn1] << "   " << P4[Bn2] << "   " << P4[Bn3] << "   " << endl;
    cout << setw(50) << P5[Bn1] << "   " << P5[Bn2] << "   " << P5[Bn3] << "   " << endl;
}

int n1;
int n2;
int n3;

void V(){
    SetConsoleTextAttribute(hConsole, 2);
}

void R(){
    SetConsoleTextAttribute(hConsole, 12);
}


void NombreCasinoPrintDroite() {
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        V();
        cout << setw(50) << P1[Bn1] << "   " << P1[Bn2] << "   ";
        R();
        cout  << P1[Bn3] << endl;

        V();
        cout << setw(50) << P2[Bn1] << "   " << P2[Bn2] << "   ";
        R(); 
        cout  << P2[Bn3] << endl;
        V();

        cout << setw(50) << P3[Bn1] << "   " << P3[Bn2] << "   ";
        R();
        cout  << P3[Bn3] << endl;
        V();  


        cout << setw(50) << P4[Bn1] << "   " << P4[Bn2] << "   ";
        R();
        cout  << P4[Bn3] << endl;
        V();  


        cout << setw(50) << P5[Bn1] << "   " << P5[Bn2] << "   ";
        R();
        cout  << P5[Bn3] << endl;
        V();  
    
    
}

void NombreCasinoPrintGauche() {
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    R();
    cout << setw(50) << P1[Bn1] << "   ";
    V();
    cout  << P1[Bn3] << "   " << P1[Bn2]  << endl;

    
    R();
    cout << setw(50) << P2[Bn1] << "   ";
    V();  
    cout  << P2[Bn3] << "   " << P2[Bn2]  << endl;

    
    R();
    cout << setw(50) << P3[Bn1] << "   ";
    V();  
    cout  << P3[Bn3] << "   " << P3[Bn2]  << endl;
    

    R();
    cout << setw(50) << P4[Bn1] << "   ";
    V();  
    cout  << P4[Bn3] << "   " << P4[Bn2]  << endl;


    R();
    cout << setw(50) << P5[Bn1] << "   ";
    V();
    cout  << P5[Bn3] << "   " << P5[Bn2]  << endl;  
}

