#include <iostream>
#include <cstring>

using namespace std;

//Ingresar un valor entero N (< 30) y a continuación un conjunto de N elementos. Si el último elemento del conjunto
//tiene un valor menor que 10 imprimir los negativos y en caso contrario los demás

int main (){
    int n;
    cout << "Ingrese un numero" << endl;
    cin >> n;
    while (n<1 || n>30){
        cout << "Valor incorrecto (menor a 0 o mayor a 30)" << endl;
        cin >> n;
    }
    int vector[n];
    for (int i=0;i<n;i++){
        cout << "Ingrese el valor " << i+1 << endl;
        cin >> vector[i];
    }
    if (vector[n-1]<10){
        cout << "El ultimo valor es menor a 10. Los valores negativos son:" << endl;
        for (int i=0;i<n;i++){
            if (vector[i]<0){
                cout << vector[i] << endl;
            }
        }
    }
    else {
        cout << "El ultimo valor es mayor a 10. Los valores positivos son:" << endl;
        for (int i=0;i<n;i++){
            if (vector[i]>0){
                cout << vector[i] << endl;
            }
        }
    }
    return 0;
}