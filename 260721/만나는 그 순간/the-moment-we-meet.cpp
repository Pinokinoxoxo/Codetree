#include <iostream>
using namespace std;

// 100000(10만) -> 1000005(100만 5칸)으로 변경
int arr_a[1000005] = {0};
int arr_b[1000005] = {0};

int main() {
    int n, m;
    cin >> n >> m;

    int time_a = 1, time_b = 1;
    for (int i = 0; i < n; i++) {
        char d;
        int t;
        cin >> d >> t;

        for (int j = 0; j < t; j++) {
            if (d =='R') {
                arr_a[time_a] = arr_a[time_a - 1] + 1;
            }
            else if (d == 'L') {
                arr_a[time_a] = arr_a[time_a - 1] - 1;
            }
            time_a++;
        }

    }

    for (int i = 0; i < m; i++) {
        char d;
        int t;
        cin >> d >> t;

        for (int j = 0; j < t; j++) {
            if (d =='R') {
                arr_b[time_b] = arr_b[time_b - 1] + 1;
            }
            else if (d == 'L') {
                arr_b[time_b] = arr_b[time_b - 1] - 1;
            }
            time_b++;
        }

    }

    int ans = -1;

    for (int i = 1; i < time_a; i++) {
        if (arr_a[i] == arr_b[i]) {
            ans = i; // 위치가 같아지는 최초의 시간을 저장하고
            break;   // 즉시 반복문을 탈출합니다.
        }
    }

    cout << ans;

    return 0;
}