#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
      for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    int producto_punto = 0;

  for (int i = 0; i < n; i++) {
    producto_punto += a[i] * b[i];
  }

  cout<< producto_punto;
    

    return 0;
}