//solucion al problema 11184 de omega up
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    double discriminante = b * b - 4 * a * c;
    double raiz = sqrt(discriminante);

    double x1 = (-b + raiz) / (2 * a);
    double x2 = (-b - raiz) / (2 * a);

    cout << x1 << " " << x2 << endl;

    return 0;
}