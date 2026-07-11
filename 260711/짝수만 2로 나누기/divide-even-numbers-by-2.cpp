#include <iostream>
using namespace std;

void arr_devide(int *x, int n) {
    for (int i = 0; i < n; i++) {
        if (x[i] % 2 == 0) {
            x[i] = x[i] / 2;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
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
    arr_devide(arr, n);
    return 0;
}