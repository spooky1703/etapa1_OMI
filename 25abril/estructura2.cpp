#include <iostream>
using namespace std;

struct Alumno
{
    char nombre[20];
    int edad;
    int promedio;
}alumnos[3];

int main(){
    int mayor =0, pos=0;

    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);
        cout<<"Nombre: "; cin.getline(alumnos[i].nombre,20,'\n');
        cout<<"Edad: "; cin>>alumnos[i].edad;
        cout<<"Promedio: "; cin>> alumnos[i].promedio;

        if(alumnos[i].promedio>mayor){
            mayor = alumnos[i].promedio;
            pos = i;
        }
        cout<<"\n";
    }
    cout<<"\nAlumnos con el mejor promedio \n";
    cout<<"nombre: " << alumnos[pos].nombre<<endl;
    cout<<"edad: " << alumnos[pos].edad<<endl;
    cout<<"Promedio: " << alumnos[pos].promedio<<endl;


}