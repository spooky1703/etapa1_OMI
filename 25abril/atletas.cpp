#include <iostream>
using namespace std;

struct Atleta {
    char nombre[30];
    char pais[20];
    int medallas;
};

int main() {
    int n;
    cout << "Ingrese el numero de atletas: ";
    cin >> n;

    Atleta* atletas = new Atleta[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre del atleta " << i + 1 << ": ";
        cin >> atletas[i].nombre;
        cout << "Ingrese el pais del atleta " << i + 1 << ": ";
        cin >> atletas[i].pais;
        cout << "Ingrese el numero de medallas del atleta " << i + 1 << ": ";
        cin >> atletas[i].medallas;
    }

    int maxMedallas = 0;
    int indiceMaxMedallas = 0;

    for (int i = 0; i < n; i++) {
        if (atletas[i].medallas > maxMedallas) {
            maxMedallas = atletas[i].medallas;
            indiceMaxMedallas = i;
        }
    }

    cout << "El atleta que ha ganado mas medallas es: " << atletas[indiceMaxMedallas].nombre << " de " << atletas[indiceMaxMedallas].pais << endl;

    delete[] atletas;

    return 0;
}