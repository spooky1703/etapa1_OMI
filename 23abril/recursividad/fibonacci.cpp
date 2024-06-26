#include <iostream>
using namespace std;

int fibonacci(int n, int fib[]){
    if(n==0 || n<=1){
        return 1;
    }
    if(fib[n]!= 0){
        return fib[n];
    }
    int r= fibonacci(n-1, fib) + fibonacci(n-2, fib);
    fib[n] = r;
    return r;
}
int main(){
    int n;
    cin>>n;
    int fib[n];
    for(int i = 0; i < n; i++){
        fib[i] = 0;
    }

    fibonacci(n-1, fib);

    for(int i = 0; i < n; i++){
        cout << fib[i] << " ";
    }

    return 0;
}