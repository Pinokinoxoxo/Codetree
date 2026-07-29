#include <iostream>

using namespace std;

int N, K, P, T;
int t[250];
int x[250];
int y[250];

bool infected[255] = {false};
int spread_count[255] = {0};

int main() {
    cin >> N >> K >> P >> T;

    for (int i = 0; i < T; i++) {
        cin >> t[i] >> x[i] >> y[i];
    }

    // Please write your code here.
    for (int i = 0; i < T - 1; i++) {
        for (int j = i + 1; j < T; j++) {
            if (t[i] > t[j]) {
                swap(t[i], t[j]);
                swap(x[i], x[j]);
                swap(y[i], y[j]);
            }
        }
    }

    infected[P] = true;
    spread_count[P] = K;

    for (int i = 0; i < T; i++) {

        int curr_x = x[i];
        int curr_y = y[i];
        bool x_can_spread = (infected[curr_x] && spread_count[curr_x] > 0);
        bool y_can_spread = (infected[curr_y] && spread_count[curr_y] > 0);

        if (x_can_spread) {
            spread_count[curr_x]--;
            if (!infected[curr_y]) {
                infected[curr_y] = true;
                spread_count[curr_y] = K;
            }
        }
        if (y_can_spread) {
            spread_count[curr_y]--;
            if (!infected[curr_x]) {
                infected[curr_x] = true;
                spread_count[curr_x] = K;
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        if (infected[i]) {
            cout << 1;
        }
        else {
            cout << 0;
        }
    }

    return 0;
}