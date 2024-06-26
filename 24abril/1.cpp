#include <iostream>

using namespace std;
//1 2 8 4 93489438238094838432890234
int main() {
    int n, k;
    cin >> n;
    int numeros[n];
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }
    cin >> k;
    for (int i = 0; i < n; i++) {
        //array[1,2,3,4,5]
        if (numeros[i] % k != 0) {
            cout << "X"<<" ";
        } else {
            cout << numeros[i]<<" ";
        }
    }
    cout << endl;
    return 0;
}