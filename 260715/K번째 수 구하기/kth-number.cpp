#include <iostream>
#include <algorithm>
using namespace std;

int n, k;

int main() {
    // Please write your code here.
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        if (i == k - 1) {
            cout << arr[i];
            break;
        }
    }

    return 0;
}