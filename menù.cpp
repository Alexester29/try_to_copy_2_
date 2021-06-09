#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <conio.h>
#include "main.h"
#include <windows.h>


using namespace std;





void game::menu()
{

    bool g=false;

    do
    {


        cout<<"                   \n\n\n\n\n\n                      ATTENZIONE \n\n              I comandi sono: \n"<<endl;
        cout<<"              # per giocare premere 1, \n "<<endl;
        cout<<"             # per informaziomi inerente al gioco, premere 0. \n\n"<<endl;
        cout<<" # Gioca: \n # info:  \n ---------->   "<<endl;
        cin>>n;
    }
    while(!g);


}

