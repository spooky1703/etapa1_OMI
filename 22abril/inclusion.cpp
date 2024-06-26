//no tuve mucha oportunidad para hacerlo mas complejo:C
//estoy a mitad de mi parcial y tenia varios proyectos por entregar
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;
int main(){
    int n,r,a1,a2,a3;
    int a,b,c,d;
    cout<<"este codigo funciona para 3 conjuntos A1,A2,A3 \n";
  cout<<"ingrese el conjunt para A1";
  cin>>a1;
  cout<<"ingrese el conjunto para A2";
  cin>>a2;
  cout<<"ingrese el conjunto para A3";
  cin>>a3;

    cout<<"A1 con A3";
    cin>> a;
      cout<<"A2 con A3";
    cin>> b;
      cout<<"A1 con A2";
    cin>> c;
      cout<<"A1 con A2 con A3";
    cin>> d;
r=a1+a2+a3-a-b-c+d;
cout<<r;
    return 0;
}