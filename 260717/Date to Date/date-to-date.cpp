#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m1, d1, m2, d2;
    int month_day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cin >> m1 >> d1 >> m2 >> d2;
    int month = m1;
    int day = d1;
    int day_count = 1;
    while (true) {
        if (month == m2 && day == d2) break;

        day++;
        day_count++;
        if (day == month_day[month] + 1) {
            month++;
            day = 1;
        }
    }
    cout << day_count;

    return 0;
}