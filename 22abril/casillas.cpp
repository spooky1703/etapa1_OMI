#include <iostream>

using namespace std;

int main() {
    int n, m;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    cout << "Ingrese el valor de m: ";
    cin >> m;

    if (m == 0) {
        cout << "Error: m no puede ser cero." << endl;
        return 1;
    }

    int resultado = (n - 1) / m + 1;
    cout << "El resultado del principio de las casillas ampliado es: " << resultado << endl;

    return 0;
}