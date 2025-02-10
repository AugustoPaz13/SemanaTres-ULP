/*
Escribe un programa que con While, defina un arreglo de 6 números, de forma que en la posición par
vaya un numero par, y viceversa
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
    int arregloNumeros[6];
    int sumaImpares = 0, sumaPares = 0;


    setlocale(LC_ALL, "");
    srand(time(0));

    for(int i=0;i<6;i++){
        if(i%2==0){
            int numeroPar = (rand() % 50) * 2;
            arregloNumeros[i]=numeroPar;
            sumaPares += numeroPar;
        }else{
            int numeroImpar = (rand() % 50) * 2 + 1;
            arregloNumeros[i]=numeroImpar;
            sumaImpares += numeroImpar;
        }
    }
    printf("ARREGLO DE NÚMEROS\n");
    for(int i=0;i<6;i++){
        printf("Indice %d: %d\n",i,arregloNumeros[i]);
    }

    cout << "La suma de los números pares es: " << sumaPares
        << "\nLa suma de los números impares es: " << sumaImpares << endl;
    return 0;
}
