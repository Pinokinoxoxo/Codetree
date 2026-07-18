#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, k;
    cin >> n >> k;
    int arr[1000] = {0};
    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        if (a < b) {
            for (int j = a - 1; j < b; j++) {
                arr[j]++;
            }
        }
        else {
            for (int j = b - 1; j < a; j++) {
                arr[j]++;
            }
        }
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > ans) {
            ans = arr[i];
        }
    }

    cout << ans;

    return 0;
}