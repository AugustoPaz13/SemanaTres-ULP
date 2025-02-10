/*
Escribe un programa que lea de la entrada estándar un arreglo de números de tamaño 100, pero que
cargue por teclado n números, y los muestre en la salida estándar los números del arreglo con sus índices
asociados.
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
    int cantNumeros, arregloNumeros[100];

    setlocale(LC_ALL, "");

    printf("Ingrese la cantidad de números que quiere ingresar (MAX 100): ");
    cin>>cantNumeros;

    while(cantNumeros>=100){
        printf("Opción no valida, intente de nuevo...");
        cin>>cantNumeros;
    }

    for(int i=0;i<cantNumeros;i++){
        printf("Introduzca un valor (indice %d): ",i);
        cin>>arregloNumeros[i];
    }

    system("cls");
    printf("\nARREGLO DE NÚMEROS\n");
    for(int i=0;i<cantNumeros;i++){
        printf("Indice %d | Valor: %d\n",i,arregloNumeros[i]);
    }

    return 0;
}
