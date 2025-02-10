/*
Dado un arreglo V de tamaño 20 con números enteros. Deje en un arreglo A todos los números
negativos y en un arreglo B el doble de los positivo
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
    int arregloV[20];

    setlocale(LC_ALL, "");

    //Llenar arregloV
    for(int i=0;i<20;i++){
        arregloV[i]=i+1;
    }

    int negativo,doble,arregloA[20], arregloB[20];

    //Llenar arregloA con los números de arregloV en negativo
    for(int i=0;i<20;i++){
        negativo = (arregloV[i]*(-1));
        arregloA[i] = negativo;
    }

    //Llenar arregloB con los números de arregloVx2
    for(int i=0;i<20;i++){
        doble = (arregloV[i]*2);
        arregloB[i] = doble;
    }
    printf("--------------------------------------\n");
    printf("ARREGLO V\n");
    //Imprimimos arregloV
    for(int i=0;i<20;i++){
        printf("[%d]",arregloV[i]);
    }
    printf("\n--------------------------------------\n");
    printf("ARREGLO A\n");
    //Imprimimos arregloA
    for(int i=0;i<20;i++){
        printf("[%d]",arregloA[i]);
    }
    printf("\n--------------------------------------\n");
    printf("ARREGLO B\n");
    //Imprimimos arregloB
    for(int i=0;i<20;i++){
        printf("[%d]",arregloB[i]);
    }
    printf("\n--------------------------------------\n");
    return 0;
}
