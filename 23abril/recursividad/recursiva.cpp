#include <iostream>
using namespace std;

int factorial(int n){
    if(n<2){
        return 1;
    }
    return n * factorial(n-1);
}
int main(){
    cout<<"Factorial (5) = " <<factorial(5)<<endl;
    return 0;
}