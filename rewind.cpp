#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <conio.h>
#include "main.h"
#include <windows.h>
using namespace std;

void game::rewind()
{


    do
    {

        cout << "\n\n\n\n\n\n\n\n# Digitare 14 per tornare al menu' iniziale altrimenti qualsiasi tasto per uscire:  "<<endl;
        cout << "---------->>>>"<<endl;
        cin >>n;
        sleep(1);
        system("cls");
    }
    while(n==14);

}


