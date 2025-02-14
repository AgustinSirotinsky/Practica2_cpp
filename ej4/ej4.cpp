#include <iostream>

using namespace std;

// Dado un número N (<25), y dos vectores A y B de N elementos que contenga valores reales
// a) genere e informe un tercer vector C intercalando los valores de posición impar de A y los valores de posición par de B.
// b) genere e informe un tercer vector D donde cada elemento contenga un valor cero si los elementos de una misma posición de A y B son iguales
// o un valor uno si no lo son.

int main(){

    const int n=20;
    int vecA[n] = {3, 7, 2, 9, 4, 6, 8, 1, 5, 0, 1, 3, 5, 7, 9, 1, 3, 5, 7, 9};
    int vecB[n] = {3, 8, 6, 4, 2, 0, 8, 6, 4, 2, 0, 8, 6, 4, 2, 0, 2, 4, 6, 8};
    int vecC[n];
    int vecD[n];
    for (int i=0;i<n;i++){
        if (i % 2 == 0){
            vecC[i]=vecB[i];
        }
        else {
            vecC[i]=vecA[i];
        }

        if (vecA[i]==vecB[i]){
            vecD[i]=0;
        }
        else {
            vecD[i]=1;
        }
    }
    cout << "Arrays: " << endl;
    cout << "A: ";
    for (int i=0; i<n; i++){
        cout << vecA[i]<< " "; 
    }
    cout << endl << "B: ";
    for (int i=0; i<n; i++){
        cout << vecB[i] << " "; 
    }
    cout << endl << "C: ";
    for (int i=0; i<n; i++){
        cout << vecC[i] << " "; 
    }
    cout << endl << "D: ";
    for (int i=0;i<n;i++){
        cout << vecD[i] << " ";
    }
    
    return 0;
}