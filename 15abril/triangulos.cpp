#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    bool lados;
    cout << "Ingrese los datos del triangulo (lados o angulos): ";
    cin >> a >> b >> c;
    cout << "Ingrese 1 si ingreso lados o 0 si ingreso angulos: ";
    cin >> lados;

    if (lados) {
        if (a == b && a == c) {
            cout << "El triangulo es Equilatero" << endl;
        } else if (a == b || a == c || b == c) {
            cout << "El triangulo es Isosceles" << endl;
        } else {
            cout << "El triangulo es Escaleno" << endl;
        }
    } else {
        if (a + b + c == 180) {
            if (a == b && a == c) {
                cout << "El triangulo es Equilatero" << endl;
            } else if (a == b || a == c || b == c) {
                cout << "El triangulo es Isosceles" << endl;
            } else {
                cout << "El triangulo es Escaleno" << endl;
            }
        } else {
            cout << "No se ha ingresado un triangulo valido" << endl;
        }
    }

    return 0;
}