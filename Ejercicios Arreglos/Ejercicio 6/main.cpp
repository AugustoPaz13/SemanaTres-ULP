/*
Escribe un programa que defina un arreglo de números y calcule si existe algún número en el arreglo
cuyo valor equivale a la suma del resto de números del arreglo.
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

    //CASO POSITIVO
    int arregloNumeros[] = {1,1,1,1,4};
    //CASO NEGATIVO
    //int arregloNumeros[] = {1,2,3,4,5};

    setlocale(LC_ALL, "");

    int sumatoria = 0;
    bool existeValor = false;

    for(int i=0;i<5;i++){
        sumatoria += arregloNumeros[i];
    }

    for(int i=0;i<5;i++){
            if(arregloNumeros[i]==(sumatoria-arregloNumeros[i])){
                existeValor = true;
                break;
            }
        }

    cout << "¿Existe un valor en el arreglo igual a la sumatoria de sus elementos? | " << (existeValor ? "Sí" : "No") << endl;
    return 0;
}
