#include <iostream>
using namespace std;

struct Promedio {
    float nota1;
    float nota2;
    float nota3;
};

struct Alumno {
    char nombre[50];
    char sexo;
    int edad;
    Promedio promedio;
};

int main() {
    int n;
    cin>> n;
    Alumno* alumno=new Alumno[n];

for (int i = 0; i < n; i++)
{
    /* code */


    cout << "Ingresa el nombre del alumno: ";
    cin.getline(alumno[i].nombre, 50);

    cout << "Ingresa el sexo del alumno (M o F): ";
    cin >> alumno[i].sexo;

    cout << "Ingresa la edad del alumno: ";
    cin >> alumno[i].edad;

    cout << "Ingresa las notas del alumno:" << endl;
    cout << "Nota 1: ";
    cin >> alumno[i].promedio.nota1;
    cout << "Nota 2: ";
    cin >> alumno[i].promedio.nota2;
    cout << "Nota 3: ";
    cin >> alumno[i].promedio.nota3;

    float promedio = (alumno[i].promedio.nota1 + alumno[i].promedio.nota2 + alumno[i].promedio.nota3) / 3;

for (int i = 0; i < n; i++)
{
    cout << endl << "Datos del alumno:" << endl;
    cout << "Nombre: " << alumno[i].nombre << endl;
    cout << "Sexo: " << alumno[i].sexo << endl;
    cout << "Edad: " << alumno[i].edad << endl;
    cout <<"promedio"<< promedio<<endl;
}
    return 0;
}