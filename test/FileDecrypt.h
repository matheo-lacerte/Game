#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
void Decrypt()
{
    char fileName[30], ch;
    fstream fps, fpt;
    
    
    fps.open("DATA.txt", fstream::out);
    if(!fps)
    {

     
    }
    fpt.open("tmp.txt", fstream::in);
    if(!fpt)
    {

      
    }
    while(fpt>>noskipws>>ch)
    {
        ch = ch-100;
        fps<<ch;
    }
    fps.close();
    fpt.close();
   

}