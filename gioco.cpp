#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <conio.h>
#include "main.h"
#include <windows.h>

using namespace std;

void game::gioco()
{


switch(n)
   	{
case 0:
   	cout<<"  \n\n\n          Il gioco e' basato sul riuscire a copiare un compito in classe, \n"<<endl;
	cout<<"          in una classe formata da 11 alunni, \n"<<endl;
	cout<<"          in base alle percentuali dovrai riuscire a prendere un bel voto \n "<<endl;
	cout<<"         fai la scelta giusta mi raccomando \n\n\n          BUON COMPITO ;) \n\n\n"<<endl;
   	break;

case 1:


	cout<<"\n\n*****************************************************************************************************************************************************************************************************\n"<<endl;
	cout<<"*********************************####################################################################################################################################********************************\n\n"<<endl;
	cout<<"\n                            scegli un banco da 1 a 11 per copiare , ad esempio se premi 1 sara' scelto il primo banco ed il ragazzo della sua postazione \n"<<endl;
	cout<<"\n                                                                            ATTENZIONE                                                                     "<<endl;
	cout<<"\n                                scegli il banco in base al rendimento che ti verra' dato ma attento/a alcuni hanno compiato per prendere un bel voto14:                                             "<<endl;
    cout<<"\n\n*****************************####################################################################################################################################************************************\n"<<endl;
    cout<<"*****************************************************************************************************************************************************************************************************\n"<<endl;

    cout<<"\n\n\n\n\n"<<endl;
    cout<<"                           MARCO                                           ANTONIO                                      GIOVANNI                                       IO           \n"<<endl;
	cout<<"                **************************                      **************************                    **************************                   **************************\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                *            1           *                      *            2           *                    *           3            *                   *                        *\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                **************************                      **************************                    **************************                   **************************\n\n\n"<<endl;
	cout<<"                          NICOLA                                        CHRISTIAN                                     JACOPO                                      MANUEL        \n"<<endl;
    cout<<"                **************************                      **************************                    **************************                   **************************\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                *           4            *                      *            5           *                    *            6           *                   *            7           *\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                **************************                      **************************                    **************************                   **************************\n\n\n"<<endl;
	cout<<"                          GABRIEL                                        ALESSANDRO                                    EMANUELE                                       LUIGI       \n"<<endl;
	cout<<"                **************************                      **************************                    **************************                   **************************\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                *            8           *                      *           9            *                    *            10          *                   *            11          *\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                *                        *                      *                        *                    *                        *                   *                        *\n"<<endl;
	cout<<"                **************************                      **************************                    **************************                   **************************\n\n\n\n\n"<<endl;



	for(i=0;i<n;i++)

{
				marco=1+rand()%100;
				antonio=1+rand()%70;
				giovanni=1+rand()%65;
				nicola=1+rand()%100;
				christian=1+rand()%100;
				jacopo=1+rand()%44;
				manuel=1+rand()%100;
				gabriel=1+rand()%60;
				alessandro=1+rand()%100;
				emanuele=1+rand()%100;
				luigi=1+rand()%100;



				cout<<"                                                STATISTICHE RENDIMENTO SCOLASTICO\n\n\n\n";
				cout<<"        MARCO = percentuale voto -->"<<marco <<" punti           ANTONIO = percentuale voto -->"<<antonio <<" punti              GIOVANNI = percentuale voto -->"<<giovanni <<" punti                                          "<<endl << endl;
				cout<<"       NICOLA = percentuale voto -->"<<nicola <<" punti         CHRISTIAN = percentuale voto -->"<<christian<<" punti                IACOPO = percentuale voto -->"<<jacopo<<" punti         MANUEL = percentuale voto -->"<<manuel<<" punti  "<<endl << endl;
				cout<<"      GABRIEL = percentuale voto -->"<<gabriel <<" punti        ALESSANDRO = percentuale voto -->"<<alessandro <<" punti              EMANUELE = percentuale voto -->"<<emanuele<<" punti          LUIGI = percentuale voto -->"<<luigi <<" punti  "<<endl << endl << endl;

}

    voto();

    cout << "che banco vuoi scegliere??.------> " << endl;
	cin>> n;
	sleep(0);
	system("cls");

}
}


