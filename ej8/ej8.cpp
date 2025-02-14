#include <iostream>

using namespace std;

// Dado un numero N (<50), y un vector VEC de N valores enteros positivos ordene el contenido del vector y lo informe
// aplicando el procedimiento Burbujeo:
// ∙ en orden ascendente
// ∙ en orden descendente

void burbujaASC(int v[], int n) 
{
    int i, j, aux;

    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= (n - i); j++)
        {
            if (v[j - 1] > v[j]) // Este signo diferencia al ascendente y al descendente
            {
                aux = v[j];
                v[j] = v[j - 1];
                v[j - 1] = aux;
            }
        }
    }
}

void burbujaDESC(int v[], int n) 
{
    int i, j, aux;

    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= (n - i); j++)
        {
            if (v[j - 1] < v[j]) // Este signo diferencia al ascendente y al descendente
            {
                aux = v[j];
                v[j] = v[j - 1];
                v[j - 1] = aux;
            }
        }
    }
}

int main() {
    const int n=40;
    int vec[n] = {5, 1, 9, 4, 7, 12, 18, 14, 20, 23, 25, 28, 30, 33, 35, 38, 40, 43, 45, 48, 50, 53, 55, 58, 60, 63, 65, 68, 70, 73, 75, 78, 80, 83, 85, 88, 90, 93, 95, 98};
    burbujaASC(vec,n);
    cout << "Ascendente: " << endl;
    for (int i=0;i<n;i++){
        cout << vec[i] << " ";
    }
    burbujaDESC(vec,n);
    cout  << endl << "Descendente: " << endl;
    for (int i=0; i<n; i++){
        cout << vec[i] << " ";
    }
    return 0;
}