#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double distancia_chebyshev(const vector<double>& x, const vector<double>& y) {
    double max_distancia = 0.0;
    for (int i = 0; i < x.size(); ++i) {
        double distancia = abs(x[i] - y[i]);
        max_distancia = max(max_distancia, distancia);
    }
    return max_distancia;
}

int main() {
    int n;
    cout << "Ingrese el número de dimensiones: \n";
    cin >> n;

    vector<double> x(n), y(n);
    cout << "Ingrese las coordenadas en x de las " << n <<" dimensiones \n";
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    cout << "Ingrese las coordenadas en y de las " << n <<" dimensiones \n";
    for (int i = 0; i < n; ++i) {
        cin >> y[i];
    }

    double d = distancia_chebyshev(x, y);
    cout << "La distancia de Chebyshev entre los dos puntos es: " << d << endl;

    return 0;
}