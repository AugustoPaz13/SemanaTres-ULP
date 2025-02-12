/*
 Hacer una matriz M1 de tipo entera de 2 * 2, llenarla de números y luego copiar todo el contenido de
M1 hacia otra matriz M2, sumándole 1 a cada elemento de M1 al copiarlo.
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
    int matrizM1[2][2];

    setlocale(LC_ALL, "");

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Ingrese un número para ponerlo en la matriz: ");
            cin >> matrizM1[i][j];
        }
    }

    int numero, matrizM2[2][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            numero = matrizM1[i][j];
            matrizM2[i][j] = numero + 1;
        }
    }
    system("cls");
    cout << "------------------" << endl;
    cout << "MATRIZ M1" << endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("[%d]",matrizM1[i][j]);
        }
        printf("\n");
    }
    cout << "------------------" << endl;
    cout << "MATRIZ M2" << endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("[%d]",matrizM2[i][j]);
        }
        printf("\n");
    }
    cout << "------------------" << endl;
    return 0;
}
