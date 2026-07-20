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

    int cnt = 0, max_cnt = 0;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cnt = 1;
        }
        else if (arr[i - 1] < arr[i]) {
            cnt++;
        }
        else cnt = 1;

        if (max_cnt < cnt) max_cnt = cnt;
    }

    cout << max_cnt;
    return 0;
}