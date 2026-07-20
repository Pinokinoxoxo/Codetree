#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[1005] = {0};
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr[i] = a;
    }

    int cnt = 0;
    int max = 0;

    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] == arr[i - 1]) {
            cnt++;
        }
        else cnt = 1;

        if (max < cnt) {
            max = cnt;
        }
    }

    cout << max;
    return 0;
}