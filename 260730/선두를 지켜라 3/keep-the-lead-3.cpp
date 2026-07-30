#include <iostream>
using namespace std;

int pos_a[1000005] = {0};
int pos_b[1000005] = {0};
int pos_1st[1000005] = {0};

int main() {
    // Please write your code here.
    int N, M;
    cin >> N >> M;

    int time_a = 1;

    for (int i = 0; i < N; i++) {
        int v, t;
        cin >> v >> t;
        for (int j = 0; j < t; j++) {
            pos_a[time_a] = pos_a[time_a - 1] + v;
            time_a++;
        }
    }

    int time_b = 1;
    for (int i = 0; i < M; i++) {
        int v, t;
        cin >> v >> t;
        for (int j = 0; j < t; j++) {
            pos_b[time_b] = pos_b[time_b - 1] + v;
            time_b++;
        }
    }

    pos_1st[0] = 3;

    int tot_time = time_a - 1;

    for (int i = 1; i <= tot_time; i++) {
        if (pos_a[i] > pos_b[i]) {
            pos_1st[i] = 1;
        }
        else if (pos_a[i] < pos_b[i]) {
            pos_1st[i] = 2;
        }
        else {
            pos_1st[i] = 3;
        }
    }

    int cnt = 0;

    for (int i = 1; i <= tot_time; i++) {
        if ( pos_1st[i] != pos_1st[i - 1]) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}