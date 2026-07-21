#include <iostream>
using namespace std;

int arr_a[1000005] = {0};
int arr_b[1000005] = {0};
int time_a = 1, time_b = 1;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int v, t;
        cin >> v >> t;

        for (int j = 0; j < t; j++) {
            arr_a[time_a] = arr_a[time_a - 1] + v;
            time_a++;
        }
    }

    for (int i = 0; i < m; i++) {
        int v, t;
        cin >> v >> t;

        for (int j = 0; j < t; j++) {
            arr_b[time_b] = arr_b[time_b - 1] + v;
            time_b++;
        }
    }

    int ans = 0;
    int leader = 0;

    for (int i = 1; i < time_a; i++) {
        if (arr_a[i] > arr_b[i]) {
            if (leader == 2) {
                ans++;
            }
            leader = 1;
        }
        else if (arr_a[i] < arr_b[i]) {
            if (leader == 1) {
                ans++;
            }
            leader = 2;
        }
    }

    cout << ans;

    return 0;
}