#include <iostream>

using namespace std;

// Escriba un programa que permita ingresar la tirada de un par de dados 50 veces
// y muestre una lista donde se vea cuántas veces se dio cada uno de los resultados posibles. 
// Por cada tirada se deberán ingresar 2 valores, cada uno representa el valor de un dado. El formato de la salida debe ser el siguiente:
// 2 salió ... veces
// 3 salió ... veces
// . . 12 salió ... veces

int main(){
    int a;
    int b;
    const int n=50;
    int vec[n];
    const int x = 11;
    int vecCant[x] = {0,0,0,0,0,0,0,0,0,0,0}; //vecCant[0] = resultado 2, vecCant[1] = resultado 3, ... vecCant[9] = resultado 11, vecCant[10] = resultado 12

    for (int i=0; i<n; i++){
        cout << "Ingrese la tirada del primer dado" << endl;
        cin >> a;
        while (a<1||a>6){
            cout << "Valor incorrecto. Ingrese la tirada del primer dado" << endl;
            cin >> a;
        }
        cout << "Ingrese la tirada del segundo dado" << endl;
        cin >> b;
        while (b<1||b>6){
            cout << "Valor incorrecto. Ingrese la tirada del segundo dado" << endl;
            cin >> b;
        }
        vec[i]=a+b;
        vecCant[vec[i]-2]++;
    }

    for (int i=0;i<x;i++){
        cout << "El " << i+2 << " salio: " << vecCant[i] << " veces" << endl;
    }

    return 0;
}