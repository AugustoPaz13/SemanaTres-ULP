/*
Realiza un programa que defina una matriz de NxN y escriba un ciclo para que muestre la diagonal
principal de la matriz. El número N es un valor válido entre 3 a 7.
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
    int N;

    setlocale(LC_ALL, "");

    printf("Ingrese el tamaño de la matriz (3-7): ");
    cin >> N;

    while(N<3 || N >7){
        printf("Opción no valida, intente de nuevo...\n");
        system("pause");
        system("cls");
        printf("Ingrese el tamaño de la matriz (3-7): ");
        cin >> N;
    }

    int matriz[N][N];

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j){
                printf("[  ]");
            }else{
            printf(" - ");
            }
        }
        printf("\n");
    }

    return 0;
}
