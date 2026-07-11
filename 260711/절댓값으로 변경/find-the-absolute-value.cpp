#include <iostream>
using namespace std;

void cal_func(int *x, int n) {
    for (int i = 0; i < n; i++) {
        if (x[i] < 0) {
            x[i] = - x[i];
        }
    }
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        arr[i] = tmp;
    }
    cal_func(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}