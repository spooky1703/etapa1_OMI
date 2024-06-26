//ejercicio 21 
//rellenar un arreglo con n números posteriormente usando 
//punteros determinar el menor elemento del vector
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n], *dir_numero, menor=arr[0]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];//ciclo para almacenar los valores en el vector
    }
    dir_numero = arr;//como es arreglo no es necesario usar &
    for (int i = 0; i < n; i++) {//se realiza una iteracion
        //se compara el primer numero de arr[] obvio va a ser menor que el valor de "menor"
        if(*dir_numero<menor){
            menor= *dir_numero;
            //por cada iteracion se puede actualizar el valor o mantener
        }
        dir_numero++;
    }
    cout << menor;

    return 0;
}