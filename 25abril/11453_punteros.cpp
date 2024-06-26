#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int* a = new int[n];
  int* b = new int[n];

  for (int i = 0; i < n; i++) {
    cin >> *(a + i);
  }

  for (int i = 0; i < n; i++) {
    cin >> *(b + i);
  }

  int producto_punto = 0;

  for (int i = 0; i < n; i++) {
    producto_punto += *(a + i) * *(b + i);
  }

  cout << producto_punto << endl;

  delete[] a;
  delete[] b;

  return 0;
}