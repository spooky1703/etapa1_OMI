#include <iostream>
using namespace std;

int main(){
//el puntero (*dir_num) imprime lo que encuentra en la direccion que esta asociada con el &

    int num, *dir_num; 
    num =20;
    dir_num= &num;
    cout<<"numero: "<<*dir_num<<endl;
    cout<<"direccion de memoria: "<<dir_num<<endl;

    return 0;
}