#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int decision;
    double a, b, c, v;
    char SioNo;

    do {
        cout << "De qué figura quiere sacar su volumen:\n";
        cout << "1 - Cubo\n";
        cout << "2 - Prisma rectangular\n";
        cout << "3 - Cilindro\n";
        cout << "4 - Esfera\n";
        cout << "5 - Cono\n";
        cout << "6 - Pirámide\n";
        cin >> decision;

        switch (decision) {
            case 1:
                cout << "Cubo\n";
                cout << "Ingrese el lado a: ";
                cin >> a;
                v = pow(a, 3);
                cout << "El volumen es: " << v << endl;
                break;
            case 2:
                cout << "Prisma rectangular\n";
                cout << "Ingrese el alto, el largo y el ancho: ";
                cin >> a >> b >> c;
                v = a * b * c;
                cout << "El volumen es: " << v << endl;
                break;
            case 3:
                cout << "Cilindro\n";
                cout << "Ingrese en orden la altura y el radio: ";
                cin >> a >> b;
                v = M_PI * pow(b, 2) * a;
                cout << "El volumen es: " << v << endl;
                break;
            case 4:
                cout << "Esfera\n";
                cout << "Ingrese el radio: ";
                cin >> b;
                v = (4.0 / 3.0) * M_PI * pow(b, 3);
                cout << "El volumen es: " << v << endl;
                break;
            case 5:
                cout << "Cono\n";
                cout << "Ingrese en orden el radio y la altura: ";
                cin >> b >> a;
                v = (1.0 / 3.0) * M_PI * pow(b, 2) * a;
                cout << "El volumen es: " << v << endl;
                break;
            case 6:
                cout << "Pirámide regular cuadrangular\n";
                cout << "Ingrese en orden un lado de la base y la altura de la pirámide: ";
                cin >> b >> a;
                v = (pow(b, 2) * a) / 3;
                cout << "El volumen es: " << v << endl;
                break;
            default:
                cout << "Opción inválida.\n";
                break;
        }

        cout << "¿Desea realizar otro cálculo? (s/n): ";
        cin >> SioNo;
    } while (SioNo == 's' || SioNo == 'S');

    return 0;
}