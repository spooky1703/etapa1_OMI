#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int hola;
    char SioNo;
    double a,b,c;

do{
    cout<<"TEOREMA DE PITAGORAS \n";
    cout<<"ustes busca encontrar la hipotenusa (1) o un cateto?(2) \n";
        cin>>hola;
if(hola==1){
    cout<<"introduzca el cateto a \n";
        cin>>a;
    cout<<"introduzca el cateto b \n";
        cin>>b;
    c=sqrt(pow(a,2) + pow(b,2));
    cout<<"la hipotenusa tiene un valor de: " << c<<"\n";
}else{
    cout<<"ingrese el cateto del que si se sabe su magnitud \n";
        cin>>a;
    cout<<"ingrese la hipotenusa\n";
        cin>>c;
    b=sqrt(pow(c,2) + pow(a,2));
    cout<<"el cateto tiene un valor de: " << b<<"\n";

}

    cout << "¿Desea realizar otro cálculo? (s/n): \n";
        cin >> SioNo;
    } while (SioNo == 's' || SioNo == 'S');



    return 0;
}