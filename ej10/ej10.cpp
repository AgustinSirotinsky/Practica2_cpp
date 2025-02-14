#include <iostream>

using namespace std;

//Genere e informe una matriz MUL[10x10] con las tablas de multiplicar.

int main() {
    const int n=10;
    int MUL[n][n];
    for (int i=0;i<n;i++){
        for (int j=0; j<n; j++){
            MUL[i][j]=(i+1)*(j+1);
            cout << MUL[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}