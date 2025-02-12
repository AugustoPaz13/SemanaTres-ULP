/*
Se desea saber la temperatura media trimestral de 3 países. Para ello se tiene como dato las
temperaturas medias mensuales de dichos países entre enero (mes 0) a diciembre (mes 11).
Seleccionar las estructuras de datos adecuadas para el almacenamiento de los datos en memoria.
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
    //Tres paises Doce meses
    string nombrePaises[3];
    float matrizTemperaturas[3][12];
    float mediaPaises[3],sumatoria;

    setlocale(LC_ALL, "");
    srand(static_cast<unsigned>(time(0)));

    //PIDE EL NOMBRE DE LOS TRES PAISES
    for(int i=0;i<3;i++){
        printf("Ingrese el nombre de PAIS %d: ",i+1);
        getline(cin,nombrePaises[i]);
    }
    system("pause");
    //LLENA LA MATRIZ CON TEMPERATURAS AL AZAR DE 0 a 41
    for(int i=0;i<3;i++){
        for(int j=0;j<12;j++){
            matrizTemperaturas[i][j]=rand() % (45 - (-5) + 1) + (-5); //Temperatura entre -5 y 45 grados
        }
    }

    system("cls");
    cout << "TEMPERATURAS MENSUALES POR PAIS\n" << endl;
    char* meses[] = {"ENE", "FEB", "MAR", "ABR", "MAY", "JUN", "JUL", "AGO", "SEP", "OCT", "NOV", "DIC"};
    // Imprimir encabezado de meses
    for (int j = 0; j < 12; j++) {
        printf("[%6s] ", meses[j]); // Alineado con 3 espacios
    }
    printf("\n");
    // Imprimir temperaturas
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 12; j++) {
            printf("[%6.2f] ", matrizTemperaturas[i][j]); // Alineado con 6 espacios y 2 decimales
        }
        printf("\n");
    }
    system("pause");

    //CALCULA LA TEMPERATURA ANUAL
    for(int i=0;i<3;i++){
        for(int i=0;i<3;i++){
            sumatoria = 0;
            for(int j=0;j<12;j++){
                sumatoria += matrizTemperaturas[i][j];
            }
            mediaPaises[i] = sumatoria/12.0;
        }
    }

    system("cls");
    for(int i=0;i<3;i++){
        cout << "La media de temperatura de " << nombrePaises[i] << " en el año fue: " << fixed << setprecision(2) << mediaPaises[i] << "°" << endl;
    }

    return 0;
}
