#include <iostream>
using namespace std;

int factorial(int n, int arr[]) {
    if (n == 0) {
        arr[0] = 1;
        return 1;
    }
    int result = n * factorial(n - 1, arr);
    arr[n] = result;
    return result;
}

int main() {
    int n = 5;
    int arr[n];
    factorial(n, arr);
    for (int i = 0; i < n; i++) {
        cout << "Factorial of " << i << " is " << arr[i] << endl;
    }
    return 0;
}