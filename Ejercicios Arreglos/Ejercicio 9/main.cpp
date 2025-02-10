/*
Se tiene el arreglo A con 100 elementos almacenados. Diseñe un algoritmo que escriba ¨SI¨, si el arreglo
esta ordenado ascendentemente, o ¨NO¨ si el arreglo no está ordenado
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
    int arregloNumeros[100];
    bool estaOrdenado = true;

    srand(static_cast<unsigned>(time(0)));
    setlocale(LC_ALL, "");

    //Arreglo ordenado
    /*for(int i=0;i<100;i++){
        arregloNumeros[i] = i+1;
    }*/

    //Arreglo no ordenado
    for(int i=0;i<100;i++){
        arregloNumeros[i] = rand() % 100 + 1;
    }

    for(int i=0;i<100;i++){
        if(arregloNumeros[i]>arregloNumeros[i+1]){
            estaOrdenado = false;
        }
    }

    cout << "¿El arreglo está ordenado de manera creciente? | "
         << (estaOrdenado ? "Si" : "No") << endl;

    return 0;
}
