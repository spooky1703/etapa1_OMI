#include <iostream>
using namespace std;

int main(){
    int n, r;
    cin >> n >> r;

    double fn = 1; // factorial de n
    for (int i = n; i >= 1; i--) {
        fn *= i;
    }

    double fnr = 1; // factorial de (n-r)
    for (int i = n - r; i >= 1; i--) {
        fnr *= i;
    }

    double fr = 1; // factorial de r
    for (int i = r; i >= 1; i--) {
        fr *= i;
    }

    double nCr = fn / (fnr * fr); 
    cout << nCr << endl;

    return 0;
}