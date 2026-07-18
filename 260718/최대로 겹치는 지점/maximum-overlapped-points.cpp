#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin >> n;
    int arr[105] = {0};

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (a < b) {
            for (int j = a; j < b + 1; j++) {
                arr[j]++;
            }
        }
        else {
            for (int j = b; j < a + 1; j++) {
                arr[j]++;
            }
        }
    }

    int ans = 0;

    for (int i = 0; i < 105; i++) {
        if (ans < arr[i]) {
            ans = arr[i];
        }
    }

    cout << ans;
    return 0;
}