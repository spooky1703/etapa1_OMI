#include <iostream>
using namespace std;

int main(){
    char SioNo;
    double y1,y2,x1,x2,m;
do
{
    cout<<"ingrese los valor de x1 y y1: \n";
    cin>>x1;
    cin>>y1;
    cout<<"ingrese los valor de x2 y y2: \n";
    cin>>x2;
    cin>>y2;

m=(y2-y1)/(x2-x1);

    cout<<"la pendiente m tendra un valor de: " << m<<"\n";
  cout << "¿Desea realizar otro cálculo? (s/n): \n";
        cin >> SioNo;
    } while (SioNo == 's' || SioNo == 'S');

    return 0;
}