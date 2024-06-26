#include <iostream>
using namespace std;

int factorial(int n){
    int r=1;
    for(int i=1; i<=n;i++){
        r*=i;
    }
    return r;
}

int combinacion(int n, int k){
    return factorial(n) / (factorial(k) * factorial(n-k));
}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<=(n-1); i++){
        for(int j=0; j<=i; j++){
            cout << combinacion(i, j) << " ";
        }
        cout << endl;
    }
}