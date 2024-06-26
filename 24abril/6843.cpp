#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
int numbers[N];
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }
    int contador = 0;
    for (int i = 0; i < N; i++) {
        if (numbers[i] == 8) {
            contador = 1;
            break;
        }
    }
    cout << contador << endl;
    return 0;
}