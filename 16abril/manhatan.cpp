#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double distancia_manhattan(const vector<double>& x, const vector<double>& y) {
    double sum = 0.0;
    for (size_t i = 0; i < x.size(); ++i) {
        double distancia = abs(x[i] - y[i]);
        sum += distancia;
    }
    return sum;
}

int main() {
    int n;
    cout << "Ingrese el número de dimensiones: ";
    cin >> n;

    vector<double> x(n), y(n);
    cout << "Ingrese las coordenadas en x de las "<< n<<" dimensiones:\n";
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    cout << "Ingrese las coordenadas en y de las "<< n<<" dimensiones:\n";
    for (int i = 0; i < n; ++i) {
        cin >> y[i];
    }

    double d = distancia_manhattan(x, y);
    cout << "La distancia de Manhattan entre los dos puntos es: " << d << endl;

    return 0;
}