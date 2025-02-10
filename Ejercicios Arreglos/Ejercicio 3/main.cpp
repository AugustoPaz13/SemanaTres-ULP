/*
Escribe un programa que lea de la entrada est�ndar un arreglo de n�meros de tama�o 100, pero que
cargue por teclado n n�meros, y los muestre en la salida est�ndar los n�meros del arreglo con sus �ndices
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

    printf("Ingrese la cantidad de n�meros que quiere ingresar (MAX 100): ");
    cin>>cantNumeros;

    while(cantNumeros>=100){
        printf("Opci�n no valida, intente de nuevo...");
        cin>>cantNumeros;
    }

    for(int i=0;i<cantNumeros;i++){
        printf("Introduzca un valor (indice %d): ",i);
        cin>>arregloNumeros[i];
    }

    system("cls");
    printf("\nARREGLO DE N�MEROS\n");
    for(int i=0;i<cantNumeros;i++){
        printf("Indice %d | Valor: %d\n",i,arregloNumeros[i]);
    }

    return 0;
}
