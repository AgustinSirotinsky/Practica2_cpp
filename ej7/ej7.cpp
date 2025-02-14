#include <iostream>

using namespace std;

// Dado un conjunto de N cursos ( <=20) de la cátedra de algoritmos, de cada uno
// de ellos código de curso ( 4 caracteres) y cantidad de alumnos, y de cada alumno el número de legajo y nota (0..10) de los alumnos.
// Se pide:
// ∙ informar de cada curso la cantidad de alumnos que tuvieron como nota 0, 1, ...,9, 10
// ∙ informar al final del proceso el código de curso, el % de aprobados y el de insuficientes de cada curso.

struct Alumno {
    int numLegajo;
    int nota;
};

struct Curso{
    char codigoCurso[5];
    int cantAlumnos;
    Alumno alumnos[20];
};

int main(){
    const int n=3;
    Curso cursos[n] = {
        {"k103", 20, {{2001, 5}, {2002, 7}, {2003, 6}, {2004, 8}, {2005, 9}, {2006, 4}, {2007, 3}, {2008, 2}, {2009, 1}, {2010, 0}, {2011, 10}, {2012, 5}, {2013, 6}, {2014, 7}, {2015, 8}, {2016, 9}, {2017, 4}, {2018, 3}, {2019, 2}, {2020, 1}}},
        {"k104", 20, {{2021, 6}, {2022, 8}, {2023, 9}, {2024, 4}, {2025, 3}, {2026, 2}, {2027, 1}, {2028, 0}, {2029, 10}, {2030, 5}, {2031, 6}, {2032, 7}, {2033, 8}, {2034, 9}, {2035, 4}, {2036, 3}, {2037, 2}, {2038, 1}, {2039, 0}, {2040, 10}}},
        {"k105", 20, {{2041, 4}, {2042, 3}, {2043, 2}, {2044, 1}, {2045, 0}, {2046, 10}, {2047, 5}, {2048, 6}, {2049, 7}, {2050, 8}, {2051, 9}, {2052, 4}, {2053, 3}, {2054, 2}, {2055, 1}, {2056, 0}, {2057, 10}, {2058, 5}, {2059, 6}, {2060, 7}}}
    };

    const int x = 10;
    int vecNotasCurso[x] = {0,0,0,0,0,0,0,0,0,0};
    int desaprobados;
    int aprobados;
    int porcentajeDesaprobados;
    int porcentajeAprobados;
    //For para cada curso
    for (int i=0;i<n;i++){
        desaprobados=0;
        aprobados=0;
        cout << "Curso " << i+1 << endl;
        //Para la nota de cada alumno
        for (int j=0;j<cursos[i].cantAlumnos;j++){
            //Se le suma 1 a la posicion del vector de la nota correspondiente
            vecNotasCurso[cursos[i].alumnos[j].nota]++;
            //Si se saca >=6 aprueba si no desaprueba
            if (cursos[i].alumnos[j].nota<6){
                desaprobados++;
            }
            else {
                aprobados++;
            }
        }
        //Calculo para los porcentajes
        porcentajeDesaprobados=((desaprobados*100)/cursos[i].cantAlumnos);
        porcentajeAprobados=((aprobados*100)/cursos[i].cantAlumnos);

        cout << "Porcentaje de aprobados: " << porcentajeAprobados << endl;
        cout << "Porcentaje de desaprobados: " << porcentajeDesaprobados << endl;
        //Mostrar cuantos alumnos se sacaron x nota
        for (int k=0;k<x;k++){
            cout << k << ": " << vecNotasCurso[k] << endl;
            //Se reseta cada posicion del vector para que se pueda reutilizar
            vecNotasCurso[k]=0;
        }
        
    }


    return 0;
}