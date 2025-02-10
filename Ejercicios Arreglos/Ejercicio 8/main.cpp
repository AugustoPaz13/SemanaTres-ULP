/*
Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo
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
    int arregloNumeros[]={11,22,33,44,55};

    setlocale(LC_ALL, "");

    int nuevoArreglo[5];

    for(int i=0;i<5;i++){
        nuevoArreglo[i]=arregloNumeros[i];
    }

    printf("\nArreglo Original (%p): \n",arregloNumeros);
    for(int i=0;i<5;i++){
        printf("[%d]", arregloNumeros[i]);
    }

    printf("\nNuevo Arreglo (%p): \n",nuevoArreglo);
    for(int i=0;i<5;i++){
        printf("[%d]", nuevoArreglo[i]);
    }

    printf("\n");
    return 0;
}
