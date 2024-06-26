#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    //5 20
    for (int i = a; i <= b; i += a) {
        cout << i << " ";
    }
    return 0;
}