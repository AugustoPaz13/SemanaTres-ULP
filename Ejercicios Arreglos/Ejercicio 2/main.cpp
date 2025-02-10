/*
Escribe un programa que pida n por teclado, y usando un for que cargue en un arreglo de números
positivos desde n-1 a 0, entonces calcule la multiplicación acumulada de sus elementos.
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
    int N, multiplicacionAcumulada = 1;

    setlocale(LC_ALL, "");

    printf("Introduzca N para asignarle el tamaño al arreglo: ");
    cin >> N;
        if (N <= 0) {
        cout << "El tamaño del arreglo debe ser mayor que 0." << endl;
        return 1;
    }

    int arregloNumeros[N];

    for(int i = N - 1; i >= 0 ; i--){
        printf("Introduzca un valor: ");
        cin >> arregloNumeros[i];
        multiplicacionAcumulada *= arregloNumeros[i];
    }

    printf("\nARREGLO DE NÚMEROS\n");

    for(int i = N - 1 ; i >= 0; i--){
        printf("Indice %d: %d\n",i,arregloNumeros[i]);
    }

    cout << "\nEl resultado de la multplicación acumulada es: " << multiplicacionAcumulada << endl;
    return 0;
}
