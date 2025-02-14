#include <iostream>

using namespace std;

// Dado un valor N (<50), y una matriz MAT[NxN] que contiene valores enteros.
// Se pide:
// a) Leerla por fila
// b) Informarla por columna
// c) Informar la sumatoria de sus elementos y el valor promedio
// d) Informar el máximo elemento y su ubicación (fila y columna)
// e) Informar el mínimo de cada fila y el máximo de cada columna
// f) Informar cuantos elementos positivos hay en la diagonal principal y cuantos negativos en la diagonal secundaria

int main() {
    const int n=5;
    int MAT[n][n] = {
        {-14, 3, 11, -22, 6},
        {18, 7, 25, -4, 8},
        {16, -2, -19, 1, 13},
        {10, -24, 5, -17, 23},
        {20, -12, 15, 21, -9}
    };
    int result;
    cout << "ingrese lo q quiera hacer" << endl;
    cin >> result;
    switch(result){
        //a - leer por fila
        case 1:{
            for (int i=0;i<n;i++){
                for (int j=0;j<n;j++){
                    cout << MAT[i][j] << " ";
                }
            }
            break;
        }
        //b - leer por columna
        case 2:{
            for (int i=0;i<n;i++){
                for (int j=0;j<n;j++){
                    cout << MAT[j][i] << " ";
                }
            }
            break;
        }
        //c - Informar la sumatoria de sus elementos y el valor promedio
        case 3:{
            int sumElementos=0;
            for (int i=0;i<n;i++){
                for (int j=0;j<n;j++){
                    sumElementos+=MAT[i][j];
                }
            }
            cout << "Suma de los elementos: " << sumElementos << endl;
            cout << "Valor promedio: " << sumElementos/(n*n);
            break;
        }
        //d - Informar el máximo elemento y su ubicación (fila y columna)
        case 4: {
            int mayor[2]={0,0};
            int mayorNum=MAT[0][0];
            for (int i=0;i<n;i++){
                for (int j=0;j<n;j++){
                    if (mayorNum<MAT[i][j]){
                        mayor[0]=i+1;
                        mayor[1]=j+1;
                        mayorNum=MAT[i][j];
                    }
                }
            }
            cout << "El numero mas grande es: " << mayorNum << ". Y esta en la fila " << mayor[0] << " y en la columna " << mayor[1];
            break;
        }
        // e - Informar el mínimo de cada fila y el máximo de cada columna
        case 5:{
            int minFila[n]={MAT[0][0],MAT[1][0],MAT[2][0],MAT[3][0],MAT[4][0]};
            int maxColumna[n]={MAT[0][0],MAT[0][1],MAT[0][2],MAT[0][3],MAT[0][4]};
            for (int i=0;i<n;i++){
                for (int j=0;j<n;j++){
                    if (minFila[i]>MAT[i][j]){
                        minFila[i]=MAT[i][j];
                    }
                    if (maxColumna[i]<MAT[j][i]){
                        maxColumna[i]=MAT[j][i];
                    }
                }
                cout << "Minimo de fila " << i+1 << ": " << minFila[i] << endl;
                cout << "Maximo de columna " << i+1 << ": " << maxColumna[i] << endl;
            }
            break;
        }
        // f - Informar cuantos elementos positivos hay en la diagonal principal y cuantos negativos en la diagonal secundaria
        case 6:{
            int elPositivosDiagonalPrincipal=0;
            int elNegativosDiagonalSecundaria=0;
            for (int i=0;i<n;i++){
                if (MAT[i][i]>0){
                    elPositivosDiagonalPrincipal++;
                }
                if (MAT[n-i][n-i]<0){
                    elNegativosDiagonalSecundaria++;
                }
            }
            cout << "Elementos positivos en la diagonal principal: " << elPositivosDiagonalPrincipal << endl;
            cout << "Elementos negativos en la diagonal secundaria: " << elNegativosDiagonalSecundaria << endl;
            break;
        }
    }
    return 0;
}