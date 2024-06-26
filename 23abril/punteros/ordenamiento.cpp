//pedir al usuario n números almacenarlos en un arreglo (vector) 
//posteriormente ordenarlos de menor a mayor
#include <iostream>
#include <stdlib.h>
using namespace std;

void pedir();
void ordenar(int *, int);// a esta funcion le damos como parametro un punto que es la primer posicion del arregloy un entero que es el total de numeros en el arreglo
void imprimir(int *, int); // lo mismo que arriba
int numero;
int *puntero;

int main(){
    pedir();
    ordenar(puntero,numero);
    imprimir(puntero,numero);
    delete[]puntero;
    return 0;
}
void pedir(){
    cin>> numero;
    puntero= new int[numero];// lo creamos dinamico (consejo de un video de YT)
    //usamos el arreglo para obtener la direccion del primer numero 
    for (int i = 0; i < numero; i++)
    {
        cin>>*(puntero+i);
    }
}

void ordenar(int *puntero,int numero){
    int c; //nos servira para auxiliar el proceso
    for(int i=0; i<numero;i++){
        for (int j = 0; j < numero-1; j++)
        {
                if(*(puntero+j)> *(puntero+j+1)){//elemento j + elemento j+1
                    c= *(puntero+j);
                    *(puntero+j)= *(puntero+j+1);
                    *(puntero+j+1)=c; //intercambio dinamico :)
                }
        }
        
    }
}
void imprimir(int *puntero, int numero){
    cout<<endl<<endl;
    for(int i=0; i<numero;i++){
        cout<<*(puntero+i)<<" ";//vamos imprimiendo lo que encuentra en la posicion
    }
    cout<<endl;
}