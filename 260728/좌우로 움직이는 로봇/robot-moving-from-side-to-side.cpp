#include <iostream>
using namespace std;

int pos_a[10000005] = {0};
int pos_b[10000005] = {0};

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    int time_a = 1;    
    for (int i = 0; i < n; i++) {
        int t;
        char d;
        cin >> t >> d;
        for (int j = 0; j < t; j++) {
            if (d =='L') {
                pos_a[time_a] = pos_a[time_a - 1] - 1;
            }
            else {
                pos_a[time_a] = pos_a[time_a - 1] + 1;
            }
            time_a++;
        } 
    }

    int time_b = 1;
    for (int i = 0; i < m; i++) {
        int t;
        char d;
        cin >> t >> d;
        for (int j = 0; j < t; j++) {
            if (d == 'L') {
                pos_b[time_b] = pos_b[time_b - 1] - 1;
            }
            else {
                pos_b[time_b] = pos_b[time_b - 1] + 1;
            }
            time_b++;
        }
    }

    int max_time;
    if (time_a > time_b) {
        max_time = time_a - 1;
        for (int i = time_b; i <= max_time; i++) {
            pos_b[i] = pos_b[i - 1];
        }
    }
    else {
        max_time = time_b - 1;
        for (int i = time_a; i <= max_time; i++) {
            pos_a[i] = pos_a[i - 1];
        }
    }

    int ans = 0;
    for (int i = 1; i <= max_time; i++) {
        if (pos_a[i] == pos_b[i] && pos_a[i - 1] != pos_b[i - 1]) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}