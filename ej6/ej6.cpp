#include <iostream>

using namespace std;

// En un club social se abrieron las inscripciones de los socios distintos deportes,
// codificados de 1a 20, y de cada inscripción se conoce número de socio y código de deporte.
// Las inscripciones finalizan con un número de socio igual a 0.
// Se pide informar:
// ∙ la cantidad de inscriptos en cada deporte
// ∙ el código de deporte con la mayor cantidad de inscriptos

struct Socio{
    int numSocio;
    int codDeporte; //0: futbol, 1: golf, 2: natacion
};

int main(){
    const int n=20;
    Socio socios[n+1] = {
        {1, 0}, {2, 1}, {3, 1}, {4, 0}, {5, 1}, {6, 3}, {7, 0}, {8, 1}, {9, 2}, {10, 0}, {11, 1}, {12, 2}, {13, 0}, {14, 1}, {15, 2}, {16, 0}, {17, 1}, 
        {18, 2}, {19, 0}, {20, 1}, {0, -1}
    };
    const int x=3;
    int cantInscriptos[x]={0,0,0}; //cantInscriptos[0] = futbol, cantInscriptos[1] = golf, cantInscriptos[2] = natacion
    int i=0;
    while (socios[i].numSocio!=0){
        cantInscriptos[socios[i].codDeporte]++;
        i++;
    }
    int mayor;
    int mayornum=-1;
    for (int i=0; i<x; i++){
        if (cantInscriptos[i]>mayornum){
            mayor=i;
            mayornum=cantInscriptos[i];
        }
    }
    cout << "Cantidad de inscriptos en cada deporte: " << endl
    << "Futbol: " << cantInscriptos[0] << endl
    << "Golf: " << cantInscriptos[1] << endl
    << "Natacion: " << cantInscriptos[2] << endl;

    cout << "Deporte con mas inscriptos: ";
    switch (mayor){
        case 0:
            cout << "Futbol";
            break;
        case 1:
            cout << "Golf";
            break;
        case 2:
            cout << "Natacion";
            break;
    }
    
    return 0;
}