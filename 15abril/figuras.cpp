#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int opcion, radio, base, altura, lado, longitud, ancho;
    float area;

    cout << "Seleccione la figura geometrica:" << endl;
    cout << "1. Circulo" << endl;
    cout << "2. Rectangulo" << endl;
    cout << "3. Triangulo" << endl;
    cout << "4. Cuadrado" << endl;
    cout << "5. Rectangulo (regular o irregular)" << endl;
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese el radio del circulo: ";
            cin >> radio;
            area = M_PI * pow(radio, 2);
            cout << "El area del circulo es: " << area << endl;
            break;
        case 2:
            cout << "Ingrese la base y la altura del rectangulo: ";
            cin >> base >> altura;
            area = base * altura;
            cout << "El area del rectangulo es: " << area << endl;
            break;
        case 3:
            cout << "Ingrese la base y la altura del triangulo: ";
            cin >> base >> altura;
            area = 0.5 * base * altura;
            cout << "El area del triangulo es: " << area << endl;
            break;
        case 4:
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            area = pow(lado, 2);
            cout << "El area del cuadrado es: " << area << endl;
            break;
        case 5:
            cout << "Ingrese la longitud y el ancho del rectangulo: ";
            cin >> longitud >> ancho;
            area = longitud * ancho;
            cout << "El area del rectangulo es: " << area << endl;
            break;
        default:
            cout << "Opcion invalida, por favor seleccione una opcion valida." << endl;
            break;
    }

    return 0;
}