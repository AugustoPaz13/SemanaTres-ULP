/*
Realiza un programa que defina dos arreglos de caracteres y después almacene el contenido de ambos
arreglos en un nuevo arreglo, situando en primer lugar los elementos del primer arreglo seguido por los elementos
del segundo arreglo.
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
    char arregloUno[] = {'a','b','c','d','e'};
    char arregloDos[] = {'f','g','h','i','j'};

    setlocale(LC_ALL, "");

    char nuevoArreglo[10];

    for(int i=0;i<10;i++){
        nuevoArreglo[i] = arregloUno[i];
        if(i>4){
            nuevoArreglo[i] = arregloDos[i-5];
        }
    }

    printf("--------------------------------------\n");
    for(int i=0;i<10;i++){
        printf("[%c]",nuevoArreglo[i]);
    }
    printf("\n--------------------------------------\n");

    return 0;
}
