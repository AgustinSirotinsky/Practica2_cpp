#include <iostream>
#include <cstring>

using namespace std;

// Dado un conjunto (<100) de valores enteros de los cuales el último es cero y no debe procesarse:
// informe el valor mínimo, su posición dentro del conjunto, si el mínimo no es único, informar todas las posiciones donde se encuentre.
// informe el producto de los elementos impares que ocupen posición par.


int main (){
    const int n=20;
    int vector[n] = {1, 3, 2, -9, -3, 6, -8, 9, -11, 4, -6, -11, -9, 1, -3, 5, -7, 2, -4, 0};
    int min=vector[0];
    int productoImparesPosicionPar=1;
    for (int i=0;i<n-1;i++){
        if (vector[i]<min){
            min=vector[i];
        }
        if ((i % 2 == 0) && (vector[i] % 2 != 0)){
            productoImparesPosicionPar=vector[i]*productoImparesPosicionPar;
        }
    }
    cout << "El menor numero es " << min << endl;
    cout << "Y esta en la/s posicione/s" << endl;
    for (int i=0;i<n;i++){
        if (vector[i]==min){
        cout << i << endl;
        }
    }
    cout << "Y el producto de los elementos impares que ocupan posicion par es: " << productoImparesPosicionPar;
    return 0;
}