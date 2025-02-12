/*
Desarrollar un programa que determine si una matriz es simétrica o no. Una matriz es
simétrica si es cuadrada y si es igual a su matriz transpuesta.
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
    //Caso verdadero
    //int matriz[3][3] = {1,2,3,2,4,5,3,5,6};
    int filas, columnas;
    bool esSimetrica, esTraspuesta = true, esCuadrada = false;

    setlocale(LC_ALL, "");

    printf("Ingrese la cantidad de filas: ");
    cin >> filas;
    printf("Ingrese la cantidad de columnas: ");
    cin >> columnas;

    int matriz[filas][columnas];

    //Llenamos la matriz
    system("cls");
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            printf("Ingrese un número entero para ponerlo en la matriz: ");
            cin >> matriz[i][j];
        }
    }
    system("pause");

    //Nos fijamos si es traspuesta  i j son iguales a j i en todos los casos
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            if(matriz[i][j]!=matriz[j][i]){
                esTraspuesta = false;
                break;
            }
        }
        if (!esTraspuesta) break;
    }

    //En el caso que no sepamos la cantidad de filas y columnas de la matriz, con esto se puede calcular:
    //filas = sizeof(matriz) / sizeof(matriz[0]); // Total de bytes de la matriz dividido entre los bytes de una fila
    //columnas = sizeof(matriz[0]) / sizeof(matriz[0][0]); // Total de bytes de una fila dividido entre los bytes de un elemento

    if(filas==columnas){
        esCuadrada = true;
    }

    system("cls");
    cout << "MATRIZ" << endl;

    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            printf("[%02d]",matriz[i][j]);
        }
        printf("\n");
    }

    if(esCuadrada && esTraspuesta){
         esSimetrica = true;
    }else{
        esSimetrica = false;
    }

    cout << "\n¿ES SIMETRICA? | " << (esSimetrica ? "SI" : "NO") << endl;

    return 0;
}
