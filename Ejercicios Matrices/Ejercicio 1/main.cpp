/*
Se tiene la siguiente información:
· Nombres de 4 empleados.
· Ingresos en concepto de sueldo, cobrado por cada empleado, en los últimos 3 meses.

Confeccionar el programa para:
a) Realizar la carga de la información mencionada.
b) Generar un arreglo que tenga el ingreso acumulado en sueldos en los últimos 3 meses para cada empleado.
c) Mostrar por pantalla el total pagado en sueldos a todos los empleados en los últimos 3 meses
d) Obtener el nombre del empleado que tuvo el mayor ingreso acumulado
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
    string nombresEmpleados[4],nombreSueldoMayor;
    float sueldoEmpleados[4][3];
    float sueldoTotal[4];
    float sumatoria,mayor=0;

    setlocale(LC_ALL, "");

    for(int i=0;i <4;i++){
        printf("Ingrese el nombre del empleado: ");
        getline(cin, nombresEmpleados[i]);

        sumatoria = 0; // Reiniciar la sumatoria para cada empleado

        for (int k = 0; k < 3; k++) {
            cout << "Ingrese el sueldo del MES " << k + 1 << ": ";
            cin >> sueldoEmpleados[i][k];
            sumatoria += sueldoEmpleados[i][k];
        }
        sueldoTotal[i] = sumatoria;
        cin.ignore(); // Para limpiar el buffer

        if (sueldoTotal[i] > mayor) {
            mayor = sueldoTotal[i];
            nombreSueldoMayor = nombresEmpleados[i]; // Guardar el nombre del empleado con el sueldo más alto
        }
    }

    system("cls");
    cout << "\nNOMBRE               SUELDOS (Mes 1, Mes 2, Mes 3)       TOTAL\n";
    cout << "---------------------------------------------------------------\n";
    for (int i = 0; i < 4; i++) {
        cout << setw(20) << left << nombresEmpleados[i]; // Imprimir el nombre
        for (int k = 0; k < 3; k++) {
            cout << setw(8) << fixed << setprecision(2) << sueldoEmpleados[i][k]; // Sueldos
        }
        cout << setw(10) << fixed << setprecision(2) << "\t " << sueldoTotal[i] << endl; // Total
    }

    cout << "---------------------------------------------------------------\n";
     cout << "El sueldo de " << nombreSueldoMayor << " es el más alto con ($" << fixed << setprecision(2) << mayor << ")" << endl;
    cout << "---------------------------------------------------------------\n";
    return 0;
}
