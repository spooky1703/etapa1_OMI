#include <iostream>
using namespace std;

int main(){
    int n, f;
    cout<<"introduzca un numero para sacar su factorial \n";
    cin>>n;
    int i;
     if (n < 0) {
        cout << "Error: el factorial solo se define para números enteros positivos." << endl;
        return 1;
    }
    //iniciamos a i con el valor del numero ingresador
    //le indicamos que deje de iterar cuando llegue a 1
    //y por cada iteracion a i le restamos 1 para irse aproximando a 1
    f=1;
    for(i=n;i>=1;i--){
        f*=i; //f se actualiza multiplicándolo por el valor actual de i en cada iteracion
    }
    cout<< f;

    return 0;
}