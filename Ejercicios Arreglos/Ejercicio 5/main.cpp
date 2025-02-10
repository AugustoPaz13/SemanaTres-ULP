/*
Desarrolle un programa que lea de la entrada estándar un arreglo de enteros y determine el mayor
elemento del arreglo.
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
    int arregloNumeros[5], mayor,menor;

    setlocale(LC_ALL, "");

    for(int i=0;i<5;i++){
        printf("Ingrese un valor: ");
        cin>>arregloNumeros[i];
        if(i==0){
            mayor = arregloNumeros[i];
            menor = arregloNumeros[i];
        }else if(mayor<arregloNumeros[i]){
            mayor = arregloNumeros[i];
        }else if(menor>arregloNumeros[i]){
            menor = arregloNumeros[i];
        }
    }

    cout << "El número mayor del arreglo es: " << mayor
        << "\nEl número menor del arreglo es: " << menor << endl;

    return 0;
}
