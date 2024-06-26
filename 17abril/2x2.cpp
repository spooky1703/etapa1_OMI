#include <iostream>
using namespace std;
int main() {
    double a1, b1, c1, a2, b2, c2, det;
char SioNo;
    do
{
    cout << "Introduce los coeficientes a1, b1, c1, a2, b2, c2 en ese orden: ";
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    det = a1*b2 - a2*b1;
    if (det == 0) {
        cout << "El sistema de ecuaciones no tiene una solución única.";
    } else {
        double x = (c1*b2 - c2*b1) / det;
        double y = (a1*c2 - a2*c1) / det;
        cout << "La solución es x = " << x << ", y = " << y;
    }
 cout << "¿Desea realizar otro cálculo? (s/n): \n";
        cin >> SioNo;
    } while (SioNo == 's' || SioNo == 'S');


    return 0;
}