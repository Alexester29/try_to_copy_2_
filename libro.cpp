#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <conio.h>
#include "main.h"
#include <windows.h>
using namespace std;

void game::libro()
{
    {
    color(4, 0);
    cout << "\n\n\n\n\n\n\n\n\n\n" << endl;
    cout << "                             °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°    °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°     " <<endl;
    cout << "                            °   |   |      BRAVO HAI STUDIATO        *   *        HAI COPIATO MI DISPIACE           °# °  " <<endl;
    cout << "                            °   |   |                                 *°*                                           °## ° " <<endl;
    cout << "                            °   |   |                                 * *                                           °## ° " <<endl;
    cout << "                            °   |   |                                 * *                                           °## ° " <<endl;
    cout << "                            °    | |                                  * *                                           °## ° " <<endl;
    cout << "                            °     |                                   * *                                           °## ° " <<endl;
    cout << "                            °                                         * *                                           °## ° " <<endl;
    cout << "                            °                                         * *                                           °## ° " <<endl;
    cout << "                            °                       °                 * *                   °                       °## ° " <<endl;
    cout << "                            °        °°°°°         °   °°   °°°°      * *       °°°°       °    °°   °°°°           °## °  " <<endl;
    cout << "                            °       °     °       °   ° °  °    °     * *      °    °     °    ° °  °    °          °## °  " <<endl;
    cout << "                            °       °     °      °   °  ° °      °    * *          °     °    °  ° °      °         °## °  " <<endl;
    cout << "                            °        °°°°°°     °       ° °      °    * *         °     °        ° °      °         °## °  " <<endl;
    cout << "                            °             °    °        ° °      °    * *        °     °         ° °      °         °## °  " <<endl;
    cout << "                            °             °   °         °  °    °     * *       °     °          °  °    °          °## °  " <<endl;
    cout << "                            °        °°°°°°  °          °   °°°°      * *      °°°°° °           °   °°°°           °## °  " <<endl;
    cout << "                            °               °                         * *           °                               °## °  " <<endl;
    cout << "                            °              °                          * *                                           °## °  " <<endl;
    cout << "                            °                                         * *                                           °## °  " <<endl;
    cout << "                            °                                         * *                                           °## °  " <<endl;
    cout << "                            °                                         * *                                           °## °  " <<endl;
    cout << "                            °                                         * *                                           °## °  " <<endl;
    cout << "                            °                                         * *                                           °## °  " <<endl;
    cout << "                            °                                         * *                                           °## °  " <<endl;
    cout << "                            °                                         * *                                           °## °  " <<endl;
    cout << "                            °                                         *°*                                           °## °  " <<endl;
    cout << "                            °                                        *   *                                          °# °   " <<endl;
    cout << "                             °°°°°°°°°°°°°°°°°°°°°°°°°°°°  - STUDIA CHE E' MEGLIO-   °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°     " <<endl;
    sleep(5);
    system("cls");
    }
}


void game::color(int x, int y)
{

	HANDLE hcon;

	hcon = GetStdHandle(STD_OUTPUT_HANDLE);

	if(y == 0){

		SetConsoleTextAttribute( hcon, x );

	}
	else if(y == 1){

		SetConsoleTextAttribute( hcon, x | FOREGROUND_INTENSITY);

	}
	else if(y == 2){

		SetConsoleTextAttribute( hcon, x | BACKGROUND_RED);

	}
	else if(y == 3){

		SetConsoleTextAttribute( hcon, x | FOREGROUND_INTENSITY | BACKGROUND_RED );

	}
	else if(y == 4){

		SetConsoleTextAttribute( hcon, x | BACKGROUND_RED | BACKGROUND_INTENSITY);

	}
	else if(y == 5){

		SetConsoleTextAttribute( hcon, x | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_INTENSITY);

	}
	else if(y == 6){

		SetConsoleTextAttribute( hcon, x | BACKGROUND_GREEN);

	}
	else if(y == 7){

		SetConsoleTextAttribute( hcon, x | FOREGROUND_INTENSITY | BACKGROUND_GREEN );

	}
	else if(y == 8){

		SetConsoleTextAttribute( hcon, x | BACKGROUND_GREEN | BACKGROUND_INTENSITY);

	}
	else if(y == 9){

		SetConsoleTextAttribute( hcon, x | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_INTENSITY);

	}
	else if(y == 10){

		SetConsoleTextAttribute( hcon, x | BACKGROUND_BLUE);

	}
	else if(y == 11){

		SetConsoleTextAttribute( hcon, x | FOREGROUND_INTENSITY | BACKGROUND_BLUE );

	}
	else if(y == 12){

		SetConsoleTextAttribute( hcon, x | BACKGROUND_BLUE | BACKGROUND_INTENSITY);

	}
	else if(y == 13){

		SetConsoleTextAttribute( hcon, x | FOREGROUND_INTENSITY | BACKGROUND_BLUE | BACKGROUND_INTENSITY);

	}
	else if(y == 14){

		SetConsoleTextAttribute( hcon, x | BACKGROUND_BLUE | BACKGROUND_RED | BACKGROUND_GREEN);

	}
	else if(y == 15){

		SetConsoleTextAttribute( hcon, x | FOREGROUND_INTENSITY | BACKGROUND_BLUE | BACKGROUND_RED | BACKGROUND_GREEN);

	}
	else if(y == 16){

		SetConsoleTextAttribute( hcon, x | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);

	}
	else if(y == 17){

		SetConsoleTextAttribute( hcon, x | FOREGROUND_INTENSITY | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);

	}
}
