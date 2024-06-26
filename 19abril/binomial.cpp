#include <iostream>
#include <cmath>

using namespace std;

long long coeficiente(int n, int k) {
    long long res = 1;
    if (k > n - k)
        k = n - k;

    for (int i = 0; i < k; i++) {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

void binomio(int n) {
    cout << "(x + y)^" << n << " =";

    for (int i = 0; i <= n; i++) {
        if (i == 0) {
            cout << " " << coeficiente(n, i) << "x^" << n;
        } else if (i == n) {
            cout << " + " << coeficiente(n, i) << "y^" << n;
        } else {
            cout << " + " << coeficiente(n, i) << "x^" << (n - i) << "y^" << i;
        }
    }

    cout << endl;
}

int main() {
    int n;

    cout << "Ingresa el valor de n: ";
    cin >> n;

    binomio(n);

    return 0;
}