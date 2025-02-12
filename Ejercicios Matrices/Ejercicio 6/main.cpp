/*
Realice un programa que calcule A-suma y B-producto de 2 matrices cuadradas de 3x3.
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

    int matrizUno[3][3] = {1,2,3,4,5,6,7,8,9};
    int matrizDos[3][3] = {8,6,4,9,4,5,1,3,2};
    int matrizSuma[3][3];
    int matrizProducto[3][3];

    setlocale(LC_ALL, "");

    //Calcular la suma de matrices
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrizSuma[i][j] = matrizUno[i][j] + matrizDos [i][j];
        }
    }

    //Calcular el producto de las matrices
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrizProducto[i][j] = matrizUno[i][j] * matrizDos [i][j];
        }
    }

    //Imprimir matrices
    cout << "MATRIZ UNO" << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("[%02d]",matrizUno[i][j]);
        }
        printf("\n");
    }

    cout << "MATRIZ DOS" << endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("[%02d]",matrizDos[i][j]);
        }
        printf("\n");
    }

    cout << "SUMA DE MATRICES" << endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("[%02d]",matrizSuma[i][j]);
        }
        printf("\n");
    }

    cout << "PRODUCTO DE MATRICES" << endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("[%02d]",matrizProducto[i][j]);
        }
        printf("\n");
    }

    return 0;
}
