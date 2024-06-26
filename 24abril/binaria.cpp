#include <iostream>
using namespace std;

int búsquedaBinaria(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;

        // Comprobar si x está presente en el índice medio
        if (arr[m] == x)
            return m;
        // Si x es mayor, ignorar la mitad izquierda
        if (arr[m] < x)
            l = m + 1;
        // Si x es menor, ignorar la mitad derecha
        else
            r = m - 1;
    }
    // Si llegamos aquí, entonces el elemento no estaba presente
    return -1;
}

int main() {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int resultado = búsquedaBinaria(arr, 0, N - 1, 8);
    if (resultado == -1)
        cout << "0" << endl;
    else
        cout << "1" << endl;

    return 0;
}