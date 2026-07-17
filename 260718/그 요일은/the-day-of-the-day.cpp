#include <iostream>

using namespace std;

int m1, m2, d1, d2;
string A;
string week_day[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
int month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    // Please write your code here.
    int start_day = 0;
    for (int i = 1; i < m1; i++) {
        start_day += month[i];
    }
    start_day += d1;

    int end_day = 0;
    for (int i = 1; i < m2; i++) {
        end_day += month[i];
    }
    end_day += d2;

    int diff = end_day - start_day;
    int cnt = diff / 7;
    int target;

    for (int i = 0; i < 7; i++) {
        if (A == week_day[i]) {
            target = i;
            break;
        }
    }

    if (target <= (diff % 7 + 7) % 7) {
        cnt++;
    }

    cout << cnt;

    return 0;
}