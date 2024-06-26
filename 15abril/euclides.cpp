#include <iostream>

using namespace std;

int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return abs(a);
}

int main() {
    int num1, num2;

    cout << "Ingrese dos numeros enteros: ";
    cin >> num1 >> num2;

    int resultado = mcd(num1, num2);

    cout << "MCD: " << resultado ;

    return 0;
}