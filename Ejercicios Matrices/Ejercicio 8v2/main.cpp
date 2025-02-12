/*
A. Cargar por teclado los nombres de los países y las 12 temperaturas medias mensuales.
B. Imprimir nombres de los países y las 12 temperaturas medias. Ej. Rusia 28,20,10,1,-5,-12,-27,-33,-23,-8,3,13
C. Calcule temperatura promedio trimestral de cada país, para cada estación. Ej. Rusia Ene/Feb/Mar >> 19.33
D. Pida un país, e imprimir la temperatura mínima en los 4 trimestres. Ej. julio/Agosto/Septiembre -> -33 grados
E. Por cada país, imprimir el nombre y la mayor temperatura máxima registrada. Ej. Rusia -> Enero: 28 grados
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

// Prototipos de funciones
int opcionValida(int op);
void opcionCinco();
string nombreMeses(int j);
void ingresarPaises(string nombrePaises[3],float temperaturas[3][12]);
void mostrarTemperaturas(string nombrePaises[3],float temperaturas[3][12]);
void calcularTrimestres(float temperaturas[3][12], float trimestres[3][4]);
void mostrarTemperaturaTrimestralMasBaja(string nombrePaises[3],float trimestres[3][4]);
void mostrarMayorTemperaturaRegistrada(string nombrePaises[3],float temperaturas[3][12]);

int main() {

    setlocale(LC_ALL, "");

    string nombrePaises[3];
    //Cada fila es un pais, cada columna es un mes
    float temperaturas[3][12],trimestres[3][4];
    bool primerCalculo = false;
    int op;

    do {
        system("cls"); // Limpia la pantalla
        cout << "EJERCICIO 8.2\n"
             << "1. Ingresar paises y temperaturas\n"
             << "2. Ver temperaturas mensuales\n"
             << "3. Ver temperatura media más baja\n"
             << "4. Ver temperatura más alta por pais\n"
             << "5. Salir\n" << endl;
        printf("Opción: ");
        cin >> op;

        // Validar opción ingresada
        if (!opcionValida(op)) {
            continue; // Si la opción no es válida, vuelve al menú
        }

        switch (op) {
            case 1:
                system("cls");
                ingresarPaises(nombrePaises,temperaturas);
                cout << "Volviendo al menú..." << endl;
                system("pause"); // Pausa para que el usuario vea la salida
                break;
            case 2:
                system("cls");
                mostrarTemperaturas(nombrePaises,temperaturas);
                break;
            case 3:
                system("cls");
                if(!primerCalculo){
                    calcularTrimestres(temperaturas,trimestres);
                    primerCalculo = true;
                }
                mostrarTemperaturaTrimestralMasBaja(nombrePaises,trimestres);
                system("pause");
                break;
            case 4:
                system("cls");
                mostrarMayorTemperaturaRegistrada(nombrePaises,temperaturas);
                system("pause");
                break;
            case 5:
                opcionCinco();
                break;
        }
    } while (op != 5);

    cout << "Programa finalizado." << endl;
    return 0;
}

// Función para validar la opción ingresada
int opcionValida(int op) {
    if (op > 5 || op < 1) {
        cout << "------------------------------------" << endl;
        cout << "Opción no válida, intente de nuevo.." << endl;
        cout << "------------------------------------" << endl;
        system("pause");
        return 0; // Retorna 0 si la opción no es válida
    } else {
        return 1; // Retorna 1 si la opción es válida
    }
}

// Función para mostrar mensaje al salir del programa
void opcionCinco() {
    cout << "------------------------" << endl;
    cout << "Saliendo del programa..." << endl;
    cout << "------------------------" << endl;
}

string nombreMeses(int j){
    string nombreMeses[] = {"ENERO", "FEBRERO", "MARZO", "ABRIL", "MAYO", "JUNIO", "JULIO", "AGOSTO", "SEPTIEMBRE", "OCTUBRE", "NOVIEMBRE", "DICIEMBRE"};

    return nombreMeses[j];
}

// Función para ingresar los nombres de los países
void ingresarPaises(string nombrePaises[3],float temperaturas[3][12]) {
    cin.ignore(); // Limpiar el buffer antes de leer cadenas
    for (int i = 0; i < 3; ++i) {
        cout << "Ingrese el nombre del PAÍS " << i + 1 << ": ";
        getline(cin, nombrePaises[i]);
    }

    system("cls");
    cout << "PAISES AGREGADOS CORRECTAMENTE" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << ". " << nombrePaises[i] << endl;
    }
    system("pause");

    for(int i=0;i<3;i++){
        system("cls");
        for(int j=0;j<12;j++){
            cout << "Ingrese la temperatura de " << nombrePaises[i] << " en el mes de " << nombreMeses(j) << endl;
            printf("Temperatura: ");
            cin >> temperaturas[i][j];
        }
        system("pause");
    }
}

void mostrarTemperaturas(string nombrePaises[3],float temperaturas[3][12]){
//Imprimir las doce temperaturas medias:
    cout << "TEMPERATURAS MENSUALES POR PAIS\n" << endl;
    // Imprimir encabezado de meses
    for (int j = 0; j < 12; j++) {
        if(j==0){
            printf("\t\t");
        }
        cout << "[" << setw(8) << left << nombreMeses(j) << "]";
    }
    printf("\n");
    // Imprimir temperaturas
    for (int i = 0; i < 3; i++) {
        cout << "[" << setw(10) << left << nombrePaises[i] << "]";
        for (int j = 0; j < 12; j++) {
            if(j==0){
                printf("\t");
            }
            cout << "[" << setw(4) << fixed << setprecision(1) << temperaturas[i][j] << "] ";  // Alineado con 6 espacios y 2 decimales
        }
        printf("\n");
    }
    system("pause");
}

void calcularTrimestres(float temperaturas[3][12], float trimestres[3][4]){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 12; j++) {
            if (j < 3) {
                trimestres[i][0] += temperaturas[i][j]; // Primer trimestre
            } else if (j >= 3 && j < 6) {
                trimestres[i][1] += temperaturas[i][j]; // Segundo trimestre
            } else if (j >= 6 && j < 9) {
                trimestres[i][2] += temperaturas[i][j]; // Tercer trimestre
            } else if (j >= 9 && j < 12) {
                trimestres[i][3] += temperaturas[i][j]; // Cuarto trimestre
            }
        }
    }

    //Calculamos el promedio de las temperaturas sumadas anteriormente
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            trimestres[i][j] /= 3.0; // Cada trimestre tiene 3 meses
        }
    }
}

void mostrarTemperaturaTrimestralMasBaja(string nombrePaises[3],float trimestres[3][4]){

    int op;
    float temperaturaMasBaja;

    cout << "-------------------------------------------------------------------------" << endl;
    cout << "Seleccione un pais para obtener su temperatura más baja en un trimestre: " << endl;
    cout << "-------------------------------------------------------------------------" << endl;
    cout << "Seleccione un país para obtener su temperatura más baja en un trimestre: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << nombrePaises[i] << endl;
    }
    printf("Opción: ");
    cin >> op;
    while(op>3 || op<1){
        cout << "-------------------------------------" << endl;
        cout << "Opción no valida, intente de nuevo..." << endl;
        cout << "-------------------------------------" << endl;
        system("pause");
        system("cls");
        printf("Opción: ");
        cin >> op;
    }

    // Ajustar índice a 0-based
    int paisSeleccionado = op - 1;

    // Inicializamos temperaturaMasBaja con el primer trimestre del país seleccionado
    temperaturaMasBaja = trimestres[paisSeleccionado][0];

    // Buscamos la temperatura más baja
    int trimestreMasBajo = 0;
    for (int j = 1; j < 4; j++) { // Solo revisamos los 4 trimestres
        if (trimestres[paisSeleccionado][j] < temperaturaMasBaja) {
            temperaturaMasBaja = trimestres[paisSeleccionado][j];
            trimestreMasBajo = j;
        }
    }

    // Imprimimos el resultado
    string nombresTrimestres[] = {"ENE/FEB/MAR", "ABR/MAY/JUN", "JUL/AGO/SEP", "OCT/NOV/DIC"};
    cout << "------------------------------------------------------------------------------------------------------" << endl;
    cout << "La media de temperatura más baja de " << nombrePaises[op-1] << " fue durante el trimestre (" << nombresTrimestres[trimestreMasBajo]
         << ") con: " << temperaturaMasBaja << "°" << endl;
    cout << "------------------------------------------------------------------------------------------------------" << endl;

}

void mostrarMayorTemperaturaRegistrada(string nombrePaises[3],float temperaturas[3][12]){
    //Una fila por cada pais, en la primera columna guarda el indice del mes y en la segunda la temperatura
    float temperaturaMasAlta[3][2] = {0};

    for(int i=0;i<3;i++){
        for(int j=0;j<12;j++){
            if(i==0 && temperaturaMasAlta[0][1]<temperaturas[i][j]){
                temperaturaMasAlta[0][0] = j;
                temperaturaMasAlta[0][1] = temperaturas[i][j];
            }else if(i==1 && temperaturaMasAlta[1][1]<temperaturas[i][j]){
                temperaturaMasAlta[1][0] = j;
                temperaturaMasAlta[1][1] = temperaturas[i][j];
            }else if(i==2 && temperaturaMasAlta[2][1]<temperaturas[i][j]){
                temperaturaMasAlta[2][0] = j;
                temperaturaMasAlta[2][1] = temperaturas[i][j];
            }
        }
    }

    cout << "La temperatura más alta de " << nombrePaises[0] << " fue en " << nombreMeses(temperaturaMasAlta[0][0]) << " con " << temperaturaMasAlta[0][1] << " grados" << endl;
    cout << "La temperatura más alta de " << nombrePaises[1] << " fue en " << nombreMeses(temperaturaMasAlta[1][0]) << " con " << temperaturaMasAlta[1][1] << " grados" << endl;
    cout << "La temperatura más alta de " << nombrePaises[2] << " fue en " << nombreMeses(temperaturaMasAlta[2][0]) << " con " << temperaturaMasAlta[2][1] << " grados" << endl;

}
