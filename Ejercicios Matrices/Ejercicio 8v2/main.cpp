/*
A. Cargar por teclado los nombres de los países y las 12 temperaturas medias mensuales.
B. Imprimir nombres de los países y las 12 temperaturas medias. Ej. Rusia 28,20,10,1,-5,-12,-27,-33,-23,-8,3,13
C. Calcule temperatura promedio trimestral de cada país, para cada estación. Ej. Rusia Ene/Feb/Mar >> 19.33
D. Pida un país, e imprimir la temperatura mínima en los 4 trimestres. Ej. julio/Agosto/Septiembre -> -33 grados
E. Por cada país, imprimir el nombre y la mayor temperatura máxima registrada. Ej. Rusia -> Enero: 28 grados
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
    float mediaPaises[3],trimestres[3][4],max_min[3][2],sumatoria;

    setlocale(LC_ALL, "");

    //PIDE EL NOMBRE DE LOS TRES PAISES
    for(int i=0;i<3;i++){
        printf("Ingrese el nombre de PAIS %d: ",i+1);
        getline(cin,nombrePaises[i]);
    }
    system("pause");
    //LLENA LA MATRIZ CON TEMPERATURAS
    for(int i=0;i<3;i++){
        for(int j=0;j<12;j++){

            switch(j){
            case 0:
                printf("Ingrese la temperatura de %s en ENERO: ",nombrePaises[i]);
                cin >> matrizTemperaturas[i][j];
                break;
            case 1:
                printf("Ingrese la temperatura de %s en FEBRERO: ",nombrePaises[i]);
                cin >> matrizTemperaturas[i][j];
                break;
            case 2:
                printf("Ingrese la temperatura de %s en MARZO: ",nombrePaises[i]);
                cin >> matrizTemperaturas[i][j];
                break;
            case 3:
                printf("Ingrese la temperatura de %s en ABRIL: ",nombrePaises[i]);
                cin >> matrizTemperaturas[i][j];
                break;
            case 4:
                printf("Ingrese la temperatura de %s en MAYO: ",nombrePaises[i]);
                cin >> matrizTemperaturas[i][j];
                break;
            case 5:
                printf("Ingrese la temperatura de %s en JUNIO: ",nombrePaises[i]);
                cin >> matrizTemperaturas[i][j];
                break;
            case 6:
                printf("Ingrese la temperatura de %s en JULIO: ",nombrePaises[i]);
                cin >> matrizTemperaturas[i][j];
                break;
            case 7:
                printf("Ingrese la temperatura de %s en AGOSTO: ",nombrePaises[i]);
                cin >> matrizTemperaturas[i][j];
                break;
            case 8:
                printf("Ingrese la temperatura de %s en SEPTIEMBRE: ",nombrePaises[i]);
                cin >> matrizTemperaturas[i][j];
                break;
            case 9:
                printf("Ingrese la temperatura de %s en OCTUBRE: ",nombrePaises[i]);
                cin >> matrizTemperaturas[i][j];
                break;
            case 10:
                printf("Ingrese la temperatura de %s en NOVIEMBRE: ",nombrePaises[i]);
                cin >> matrizTemperaturas[i][j];
                break;
            case 11:
                printf("Ingrese la temperatura de %s en DICIEMBRE: ",nombrePaises[i]);
                cin >> matrizTemperaturas[i][j];
                break;
            }
        }
        system("pause");
        system("cls");
    }

    //Imprimir las doce temperaturas medias:
    cout << "TEMPERATURAS MENSUALES POR PAIS\n" << endl;
    char* meses[] = {"\ENE", "FEB", "MAR", "ABR", "MAY", "JUN", "JUL", "AGO", "SEP", "OCT", "NOV", "DIC"};
    // Imprimir encabezado de meses
    for (int j = 0; j < 12; j++) {
        if(j==0){
            printf("\t\t");
        }
        printf("[%6s] ", meses[j]); // Alineado con 3 espacios
    }
    printf("\n");
    // Imprimir temperaturas
    for (int i = 0; i < 3; i++) {
        printf("[%s]",nombrePaises[i]);
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

    //Sumamos todas las temperaturas dentro de la matriz fila pertenece a cada pais, columna a cada trimestre
    for(int i=0;i<3;i++){
        for(int j=0;j<12;j++){
            if(j<3){
                trimestres[i][0] += matrizTemperaturas[i][j];
            }else if(j>=3 && j<6){
                trimestres[i][1] += matrizTemperaturas[i][j];
            }else if(j>=6 && j<9){
                trimestres[i][2] += matrizTemperaturas[i][j];
            }else if(j>=9 && j<12){
                trimestres[i][3] += matrizTemperaturas[i][j];
            }
        }
    }

    //Calculamos el promedio de las temperaturas sumadas anteriormente
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(j==0){
                trimestres[i][j] = trimestres[i][j]/3;
            }else if(j==1){
                trimestres[i][j] = trimestres[i][j]/3;
            }else if(j==2){
                trimestres[i][j] = trimestres[i][j]/3;
            }else if(j==3){
                trimestres[i][j] = trimestres[i][j]/3;
            }
        }
    }

    //CALCULAR LA TEMPERATURA MAXIMA Y MINIMA COLUMNA 0 MAX y COLUMNA 1 MIN
    for(int i=0;i<3;i++){
        for(int j=0;j<12;j++){
            //MODIFICAMOS EL MAX Y MIN DEL PRIMER PAIS
            if(j==0 && i==0){
                max_min[0][0] = matrizTemperaturas[i][j];
                max_min[0][1] = matrizTemperaturas[i][j];
                if(matrizTemperaturas[i][j]>max_min[0][0]){
                    max_min[0][0] = matrizTemperaturas[i][j];
                }else if(matrizTemperaturas[i][j]<max_min[0][1]){
                    max_min[0][1] = matrizTemperaturas[i][j];
                }
            //MODIFICAMOS EL MAX Y MIN DEL SEGUNDO PAIS
            }else if(j==0 && i==1){
                max_min[1][0] = matrizTemperaturas[i][j];
                max_min[1][1] = matrizTemperaturas[i][j];
                if(matrizTemperaturas[i][j]>max_min[1][0]){
                    max_min[1][0] = matrizTemperaturas[i][j];
                }else if(matrizTemperaturas[i][j]<max_min[1][1]){
                    max_min[1][1] = matrizTemperaturas[i][j];
                }
            //MODIFICAMOS EL MAX Y MIN DEL TERCER PAIS
            }else if(j==0 && i==2){
                max_min[2][0] = matrizTemperaturas[i][j];
                max_min[2][1] = matrizTemperaturas[i][j];
                if(matrizTemperaturas[i][j]>max_min[2][0]){
                    max_min[2][0] = matrizTemperaturas[i][j];
                }else if(matrizTemperaturas[i][j]<max_min[2][1]){
                    max_min[2][1] = matrizTemperaturas[i][j];
                }
            }
        }
    }

    //Pedimos un pais e imprimimos la temperatura más baja del trimestre
    float masBaja;
    int op;
    cout << "-------------------------------------------------------------------------" << endl;
    cout << "Seleccione un pais para obtener su temperatura más baja en un trimestre: " << endl;
    cout << "-------------------------------------------------------------------------" << endl;
    for(int i=0;i<3;i++){
        printf("%d. %s\n",i+1,nombrePaises);
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
    switch(op){
        case 0:
            //CALCULA LA TEMPERATURA MAS BAJA DEL SEMESTRE DEL PRIMER PAIS
            for(int i=0;i<3;i++){
                for(int j=0;j<4;j++){
                    if(i==0){
                        masBaja = trimestres[i][j];
                    }else if(masBaja<trimestres[i][j]){
                        masBaja = trimestres[i][j];
                    }
                }
            }
            //IMPRIMIMOS SEGUN EL TRIMESTRE LA TEMPERATURA MAS BAJA
            for(int i=0;i<3;i++){
                for(int j=0;j<4;j++){
                    if(masBaja==trimestres[i][j]){
                        switch(i){
                            case 0:
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                cout << "La media de temperatura más baja fue durante el primer trimestre (ENE/FEB/MAR) con: " << masBaja << "°" << endl;
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                break;
                            case 1:
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                cout << "La media de temperatura más baja fue durante el primer trimestre (ABR/MAY/JUN) con: " << masBaja << "°" << endl;
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                break;
                            case 2:
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                cout << "La media de temperatura más baja fue durante el primer trimestre (JUL/AGO/SEP) con: " << masBaja << "°" << endl;
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                break;
                            case 3:
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                cout << "La media de temperatura más baja fue durante el primer trimestre (OCT/NOV/DIC) con: " << masBaja << "°" << endl;
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                break;
                        }
                    }
                }
            }
            break;
        case 1:
            //CALCULA LA TEMPERATURA MAS BAJA DEL SEMESTRE DEL SEGUNDO PAIS
            for(int i=0;i<3;i++){
                for(int j=0;j<4;j++){
                    if(i==0){
                        masBaja = trimestres[i][j];
                    }else if(masBaja<trimestres[i][j]){
                        masBaja = trimestres[i][j];
                    }
                }
            }
            //IMPRIMIMOS SEGUN EL TRIMESTRE LA TEMPERATURA MAS BAJA
            for(int i=0;i<3;i++){
                for(int j=0;j<4;j++){
                    if(masBaja==trimestres[i][j]){
                        switch(i){
                            case 0:
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                cout << "La media de temperatura más baja fue durante el primer trimestre (ENE/FEB/MAR) con: " << masBaja << "°" << endl;
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                break;
                            case 1:
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                cout << "La media de temperatura más baja fue durante el primer trimestre (ABR/MAY/JUN) con: " << masBaja << "°" << endl;
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                break;
                            case 2:
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                cout << "La media de temperatura más baja fue durante el primer trimestre (JUL/AGO/SEP) con: " << masBaja << "°" << endl;
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                break;
                            case 3:
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                cout << "La media de temperatura más baja fue durante el primer trimestre (OCT/NOV/DIC) con: " << masBaja << "°" << endl;
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                break;
                        }
                    }
                }
            }
            break;
        case 2:
            //CALCULA LA TEMPERATURA MAS BAJA DEL SEMESTRE DEL TERCER PAIS
            for(int i=0;i<3;i++){
                for(int j=0;j<4;j++){
                    if(i==0){
                        masBaja = trimestres[i][j];
                    }else if(masBaja<trimestres[i][j]){
                        masBaja = trimestres[i][j];
                    }
                }
            }
            //IMPRIMIMOS SEGUN EL TRIMESTRE LA TEMPERATURA MAS BAJA
            for(int i=0;i<3;i++){
                for(int j=0;j<4;j++){
                    if(masBaja==trimestres[i][j]){
                        switch(i){
                            case 0:
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                cout << "La media de temperatura más baja fue durante el primer trimestre (ENE/FEB/MAR) con: " << masBaja << "°" << endl;
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                break;
                            case 1:
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                cout << "La media de temperatura más baja fue durante el primer trimestre (ABR/MAY/JUN) con: " << masBaja << "°" << endl;
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                break;
                            case 2:
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                cout << "La media de temperatura más baja fue durante el primer trimestre (JUL/AGO/SEP) con: " << masBaja << "°" << endl;
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                break;
                            case 3:
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                cout << "La media de temperatura más baja fue durante el primer trimestre (OCT/NOV/DIC) con: " << masBaja << "°" << endl;
                                cout << "------------------------------------------------------------------------------------------------------" << endl;
                                break;
                        }
                    }
                }
            }
            break;
    }
    system("pause");
    system("cls");

    cout << "--------------------------------------------------------------------" << endl;
    cout << "Seleccione un pais para obtener su temperatura más alta registrada: " << endl;
    cout << "--------------------------------------------------------------------" << endl;
    for(int i=0;i<3;i++){
        printf("%d. %s\n",i+1,nombrePaises);
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
    switch(op){
        case 0:
            cout << "-------------------------------------------------------------------------------------------------" << endl;
            cout << "La temperatura más alta registrada de " << nombrePaises[0] << " fue de : " << max_min[0][0] << "°" << endl;
            cout << "-------------------------------------------------------------------------------------------------" << endl;
            break;
        case 1:
            cout << "-------------------------------------------------------------------------------------------------" << endl;
            cout << "La temperatura más alta registrada de " << nombrePaises[1] << " fue de : " << max_min[1][0] << "°" << endl;
            cout << "-------------------------------------------------------------------------------------------------" << endl;
            break;
        case 2:
            cout << "-------------------------------------------------------------------------------------------------" << endl;
            cout << "La temperatura más alta registrada de " << nombrePaises[2] << " fue de : " << max_min[2][0] << "°" << endl;
            cout << "-------------------------------------------------------------------------------------------------" << endl;
            break;
    }
    system("pause");
    return 0;
}
