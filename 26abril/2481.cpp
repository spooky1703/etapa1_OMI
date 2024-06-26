#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr1(n), arr2(m);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            cout << arr1[i++] << " ";
        } else {
            cout << arr2[j++] << " ";
        }
        k++;
    }
    while (i < n) {
        cout << arr1[i++] << " ";
        k++;
    }
    while (j < m) {
        cout << arr2[j++] << " ";
        k++;
    }

    return 0;
}