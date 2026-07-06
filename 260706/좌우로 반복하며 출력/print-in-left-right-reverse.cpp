#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int cnt = 1;

        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                int arr[n];
                arr[j] = cnt;
                cout << arr[j];
                cnt++;
            }
        }
        else {
            for (int j = n - 1; j >= 0; j--) {
                int arr[n];
                arr[j] = j + 1;
                cout << arr[j];
                cnt++;
            }
        }
        cout << "\n";
    }

    return 0;
}