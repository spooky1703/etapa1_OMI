#include <iostream>
#include <vector>

void criba_de_eratosthenes(int n) {
    std::vector<bool> primo(n + 1, true);
    primo[0] = false;
    primo[1] = false;

    for (int p = 2; p * p <= n; p++) {
        if (primo[p]) {
            for (int i = p * p; i <= n; i += p)
                primo[i] = false;
        }
    }

    for (int p = 2; p <= n; p++) {
        if (primo[p]) {
            std::cout << p << " ";
        } else {
            std::cout << "x ";
        }
    }
}

int main() {
    int n;
    std::cout << "Ingresa un número: ";
    std::cin >> n;
    std::cout << "Números primos desde el 1 hasta " << n << ":\n";
    criba_de_eratosthenes(n);
    return 0;
}