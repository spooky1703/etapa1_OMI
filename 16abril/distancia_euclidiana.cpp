#include <iostream>
#include <cmath> 
#include <vector> 

using namespace std;
double distancia(const vector<double>& coord1, const vector<double>& coord2) {
    double dist = 0.0;
    for (size_t i = 0; i < coord1.size(); ++i) {
        double diff = coord1[i] - coord2[i];
        dist += diff * diff;
    }
    return sqrt(dist);
}

int main() {
    using namespace std;
    int n;
    cout << "Ingrese el número de dimensiones: ";
    cin >> n;
    vector<double> coord1(n), coord2(n);

    cout << "Ingrese las coordenadas en x de las "<< n<<" dimensiones:\n";
    for (int i = 0; i < n; ++i) {
        cin >> coord1[i];
    }

    cout << "Ingrese las coordenadas en y de las "<< n<<" dimensiones:\n";
    for (int i = 0; i < n; ++i) {
        cin >> coord2[i];
    }
    double dist = distancia(coord1, coord2);
    cout << "La distancia euclidiana entre los dos puntos es: " << dist << endl;

    return 0;
}