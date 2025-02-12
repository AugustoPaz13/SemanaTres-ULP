/*
Realice un programa que lea una matriz de 3x3 y cree su matriz
traspuesta. La matriz traspuesta es aquella en la que su ‘columna i’ era, la ‘fila i’ de
la matriz en su forma original.
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
    int matriz[3][3] = {1,2,3,4,5,6,7,8,9};
    int matrizTraspuesta[3][3];
    setlocale(LC_ALL, "");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrizTraspuesta[i][j]=matriz[j][i];
        }
    }

    cout << "MATRIZ ORIGINAL" << endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("[%02d]",matriz[i][j]);
        }
        printf("\n");
    }

    cout << "MATRIZ TRASPASADA" << endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("[%02d]",matrizTraspuesta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
