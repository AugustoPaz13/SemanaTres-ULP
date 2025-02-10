/*
Escribe un programa que defina un arreglo de números y muestre en la salida estándar el arreglo en
orden inverso—del último al primer elemento.
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
    int arregloNumeros[] = {1,2,3,4,5,6,7,8,9,10};

    setlocale(LC_ALL, "");

    printf("ARREGLO DE NÚMEROS\n");

    for(int i=0; i<10;i++){
        printf("Indice %d | Valor %d\n",i,arregloNumeros[i]);
    }

    printf("ARREGLO DE NÚMEROS (ORDEN INVERTIDO)\n");

    for(int i=9;i>=0;i--){
        printf("Indice %d | Valor %d\n",i,arregloNumeros[i]);
    }

    return 0;
}
