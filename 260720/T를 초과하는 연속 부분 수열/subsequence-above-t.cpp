#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, t;
    cin >> n >> t;
    int arr[1005] = {0};

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr[i] = a;
    }

    int cnt = 0, cnt_max = 0;

    for (int i = 0; i < n; i++) {
        if (i == 0 && arr[0] > t) {
            cnt = 1;
        }
        else if (i == 0 && arr[0] <= t) {
            cnt = 0;
        }
        else if (arr[i] > t) {
            cnt++;
        }
        else cnt = 0;

        if (cnt_max < cnt) cnt_max = cnt;
    }

    cout << cnt_max;
    return 0;
}