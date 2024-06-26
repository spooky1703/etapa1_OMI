#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a1, b1, c1, a2, b2, c2, det;

    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    det = a1*b2 - a2*b1;
    if (det == 0) {
        return 1;
    } else {
        double x = (c1*b2 - c2*b1) / det;
        double y = (a1*c2 - a2*c1) / det;
        cout << fixed << setprecision(6) << x << " " << y;
    }
    return 0;
}