#include <iostream>
#include <cmath>
using namespace std;
int main(){
    //desarrolla un programa que automatice la formula general 
    // -b + - sqrt(b^2-4ac)
    //  ------------------
    //       2a

    double a,b,c,r,x1,x2;
    char SioNo;
    cout<< "-b + - sqrt(b^2-4ac) \n";
    cout<< "------------------- \n";
    cout<< "       2a            \n";
do{
    cout<<"Ingresa los valores de ax^2, bx, c: \n";
    cin >> a;
    cin>>b;
    cin>>c;

    x1=(-(b)+ sqrt(pow(b,2)-4*a*c))/2;
    x2=(-(b)- sqrt(pow(b,2)-4*a*c))/2;

    cout<<"El valor de x1 es: " <<x1<<endl;
    cout<<"El valor de x1 es: " <<x2;
    cout << "¿Desea realizar otro cálculo? (s/n): \n";
        cin >> SioNo;
    } while (SioNo == 's' || SioNo == 'S');


    return 0;
}