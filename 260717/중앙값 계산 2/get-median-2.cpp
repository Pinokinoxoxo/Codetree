#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            int tmp[100];
            for (int j = 0; j < n; j++) {
                tmp[j] = arr[j];
            }
            sort(tmp, tmp + i + 1);
            cout << tmp[i / 2] << " ";
        }
    }
    return 0;
}