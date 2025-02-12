/*
Hacer un array bidimensional que acepte nueve números, luego, pedir al usuario que ingrese las
coordenadas (x,y) para mostrar el elemento guardado en dicha posición.
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
    int x, y, matriz9numeros[3][3];

    setlocale(LC_ALL, "");

    cout << "-----------------------------------------------------------------" << endl;
    cout << "A continuación ingrese valores enteros según las cordenadas (x,y)" << endl;
    cout << "-----------------------------------------------------------------" << endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Ingrese el valor de [%d][%d]: ",i,j);
            cin >> matriz9numeros[i][j];
        }
    }

    system("pause");

    int op = 1;

    do{
        system("cls");

        cout << "---------------------------------------------------------" << endl;
        cout << "Ingrese cordenadas (x,y) para acceder al valor almacenado" << endl;
        cout << "---------------------------------------------------------" << endl;
        printf("x: "); cin >> x;
        printf("y: "); cin >> y;

        while(x>2 || y>2){
            cout << "-------------------------------------" << endl;
            cout << "Opción no valida, intente de nuevo..." << endl;
            cout << "-------------------------------------" << endl;
            system("pause");
            system("cls");
            cout << "---------------------------------------------------------" << endl;
            cout << "Ingrese cordenadas (x,y) para acceder al valor almacenado" << endl;
            cout << "---------------------------------------------------------" << endl;
            printf("Cordenadas: ");
            cin >> x >> y;
        }

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(i == x && j == y){
                    cout << "-----------------------------" << endl;
                    cout << "El valor almacenado es: " << matriz9numeros[i][j] << endl;
                    cout << "-----------------------------" << endl;
                }
            }
        }
        system("pause");
        system("cls");
        cout << "¿Mostrar otra coordenada?" << endl;
        printf("1.SI\n2.NO");
        printf("\nOpción:")
        cin >> op;

        while(op>2 || op<1){
            cout << "-------------------------------------" << endl;
            cout << "Opción no valida, intente de nuevo..." << endl;
            cout << "-------------------------------------" << endl;
            system("pause");
            system("cls");
            cout << "¿Mostrar otra coordenada?" << endl;
            printf("1.SI\n2.NO");
            printf("\nOpción:")
            cin >> op;
            }
    }while(op!=2);



    return 0;
}
