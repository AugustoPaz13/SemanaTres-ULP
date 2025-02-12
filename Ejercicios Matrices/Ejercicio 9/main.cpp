/*
Hacer un programa en C++ que muestre en pantalla un tablero de ajedrez con:
1. - Los peones con la letra P.
2. - Las torres con la letra T.
3. - Los caballos con la letra C.
4. - Los alfiles con la letra A.
5. - El rey con la letra K.
6. - La reina con letra Q
• Mover el peón en la casilla diagonal al alfil Tablero [1][4], y mostrar el tablero resultante.
• Repetir esto, para el alfil en [0][5], solo podría salir si el peón se ha movido, sino informarlo.
*/

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <iomanip>
#include <locale>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    char tableroAjedrez[8][8];

    setlocale(LC_ALL, "");

    //Llenar tablero de ajedrez
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(i==1 || i==6){
                tableroAjedrez[i][j]='P';
            }else if(i==0 || i==7){
                switch(j){
                    case 0:
                    case 7: tableroAjedrez[i][j]='T';
                    break;
                    case 1:
                    case 6: tableroAjedrez[i][j]='C';
                    break;
                    case 2:
                    case 5: tableroAjedrez[i][j]='A';
                    break;
                    case 3: tableroAjedrez[i][j]='Q';
                    break;
                    case 4: tableroAjedrez[i][j]='K';
                }
            }
            else{
                tableroAjedrez[i][j]=' ';
            }
        }
    }

    //Prueba tablero ajedrez
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                printf("[%c]",tableroAjedrez[i][j]);
            }
            printf("\n");
        }
    system("pause");
    cout << "-------------------------------------------" << endl;
    cout << "Realizando el primer movimiento peón [1][4]" << endl;
    cout << "-------------------------------------------" << endl;
    system("pause");
    //Realizar movimiento alfil[1][4]
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(i==1 && j==4){
                tableroAjedrez[i][j] = ' ';
                tableroAjedrez[2][4] = 'P';
            }
        }
    }

    //Prueba tablero ajedrez
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            printf("[%c]",tableroAjedrez[i][j]);
        }
        printf("\n");
    }
    system("pause");
    cout << "--------------------------------" << endl;
    cout << "Sacamos el alfin [0][5] a pasear" << endl;
    cout << "--------------------------------" << endl;
    system("pause");

    //Mensaje en el caso que no se haya movido el peón de la diagonal izqueirda al alfil
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(tableroAjedrez[1][4] == 'P'){
                cout << "--------------------------------------" << endl;
                cout << "Debe mover el peón para sacar el alfíl" << endl;
                cout << "--------------------------------------" << endl;
            }
        }
    }

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(i==0 && j==5){
                tableroAjedrez[i][j] = ' ';
                tableroAjedrez[4][1] = 'A';
            }
        }
    }
    //Prueba tablero ajedrez
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            printf("[%c]",tableroAjedrez[i][j]);
        }
        printf("\n");
    }
    return 0;
}
