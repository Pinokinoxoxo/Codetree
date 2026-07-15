#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[2 * n];
    int arr2[n];
    for (int i = 0; i < 2 * n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + 2 * n);

    for(int i = 0; i < n; i++) {
        arr2[i] = arr[i] + arr[2 * n - 1 - i];
    }

    sort(arr2, arr2 + n);
    cout << arr2[n - 1];

    return 0;
}