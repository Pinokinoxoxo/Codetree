#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m1, d1, m2, d2;
    int month_day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string week_day[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    cin >> m1 >> d1 >> m2 >> d2;

    int start_day = 0;
    for (int i = 0; i < m1; i++) {
        start_day += month_day[i];
    }
    start_day += d1;

    int end_day = 0;
    for (int i = 0; i < m2; i++) {
        end_day += month_day[i];
    }
    end_day += d2;
    int diff = end_day - start_day;

    cout << week_day[(diff % 7 + 7) % 7];

    return 0;
}