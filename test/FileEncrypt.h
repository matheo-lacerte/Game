#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
void Encrypt()
{
    char fileName[30], ch;
    fstream fps, fpt;
    fps.open("DATA.txt", fstream::in);
    if(!fps)
    {


    }
    fpt.open("tmp.txt", fstream::out);
    if(!fpt)
    {


    }
    while(fps>>noskipws>>ch)
    {
        ch = ch+100;
        fpt<<ch;
    }
    fps.close();
    fpt.close();
    fps.open("DATA.txt", fstream::out);
    if(!fps)
    {
 

    }
    fpt.open("tmp.txt", fstream::in);
    if(!fpt)
    {
    

    }
    while(fpt>>noskipws>>ch)
        fps<<ch;
    fps.close();
    fpt.close();
   


}