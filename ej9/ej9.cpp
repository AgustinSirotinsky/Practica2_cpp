#include <iostream>

using namespace std;

// Dado un numero N (<=50) y un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD),
// informar el conjunto:
// ∙ ordenado por nombre
// ∙ ordenado por fecha y nombre
// ∙ ordenado por nombre y fecha
// NOTA: Modifique y utilice el procedimiento Burbujeo

void burbuja(Persona vec[], int n) 
{
    int i, j, aux, cmp;

    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= (n - i); j++)
        {
            // if (vec[j - 1] > vec[j]) // Este signo diferencia al ascendente y al descendente
            cmp = strcmp(vec[j - 1].nombre > vec[j].nombre);
            if (cmp>0)
            {
                aux = vec[j];
                v[j] = v[j - 1];
                v[j - 1] = aux;
            }
        }
    }
}

struct Persona {
    char nombre[50+1];
    int fecha;
};

int main() {
    const int n = 50;
    Persona vec[n] = {{"Juan", 19900515}, {"Ana", 19850823}, {"Luis", 19921209}, {"Maria", 19880130}, {"Pedro", 19910717}, {"Lucia", 19890305}, {"Carlos", 19931121}, {"Sofia", 19870414}, {"Miguel", 19900602}, {"Laura", 19860919}, {"Jorge", 19921025}, {"Elena", 19850208}, {"Raul", 19911212}, {"Marta", 19890503}, {"Alberto", 19930827}, {"Patricia", 19870106}, {"Fernando", 19900318}, {"Isabel", 19880722}, {"Ricardo", 19921110}, {"Carmen", 19860404}, {"Andres", 19910616}, {"Teresa", 19850929}, {"Manuel", 19901207}, {"Rosa", 19890213}, {"Francisco", 19930820}, {"Julia", 19870501}, {"Antonio", 19921024}, {"Cristina", 19860311}, {"Jose", 19910726}, {"Beatriz", 19881109}, {"Pablo", 19900415}, {"Angela", 19850628}, {"Ramon", 19920905}, {"Gloria", 19871217}, {"Vicente", 19910202}, {"Silvia", 19890521}, {"Hector", 19930808}, {"Alicia", 19860114}, {"Enrique", 19900327}, {"Monica", 19880706}, {"Gabriel", 19921119}, {"Susana", 19850403}, {"Rafael", 19910625}, {"Ines", 19890910}, {"Victor", 19931222}, {"Clara", 19870207}, {"Adrian", 19900518}, {"Eva", 19880830}, {"Oscar", 19921112}, {"Nuria", 19860304}};
    return 0;
}