#include <iostream>
#include <cstring>

using namespace std;

//Dado un número N (<30), genere e informe un vector VEC de N elementos que contenga los primeros N números naturales pares.

int main() {
    int n;
    int valorActual=0;
    int i=0;
    cout << "Ingrese un numero" << endl;
    cin >> n;
    while (n<1 || n>30){
        cout << "Valor incorrecto (menor a 0 o mayor a 30)" << endl;
        cin >> n;
    }
    int vectorPares[n];
    while(i<n){
        valorActual++;
        if (valorActual % 2 == 0){
            vectorPares[i]=valorActual;
            i++;
        }
    }
    cout << "Vector de pares: " << endl;
    for (int i=0;i<n;i++){
        cout << vectorPares[i] << endl;
    }
    return 0;
}
