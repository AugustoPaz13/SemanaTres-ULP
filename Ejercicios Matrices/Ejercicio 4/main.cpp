/*
Hacer una matriz preguntando al usuario el número de filas y columnas, llenarla de números
aleatorios, copiar el contenido a otra matriz y por último mostrarla en pantalla.
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
    int filas, columnas;

    srand(static_cast<unsigned>(time(0)));
    setlocale(LC_ALL, "");

    printf("Ingrese la cantidad de filas de la matriz: ");
    cin >> filas;
    printf("Ingrese la cantidad de columnas de la matriz: ");
    cin >> columnas;

    int matrizUno[filas][columnas], matrizDos[filas][columnas];

    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            matrizUno[i][j] = rand() % 100 + 1;
        }
    }

    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            matrizDos[i][j] = matrizUno[i][j];
        }
    }

    system("cls");
    cout << "RESULTADO MATRIZ 2\n" << endl;
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
           printf("[%02d]",matrizDos[i][j]);
        }
        printf("\n");
    }

    return 0;
}
