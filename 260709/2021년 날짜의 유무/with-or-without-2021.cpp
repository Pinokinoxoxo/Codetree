#include <iostream>
using namespace std;

bool is_date(int m, int d) {
    if (m >= 1 && m <= 12) {
        // 1. 2월인 경우 완전히 격리
        if (m == 2) {
            if (d >= 1 && d <= 28) return true;
        }
        // 2. 31일까지 있는 달 (7월 이하 홀수 달 OR 8월 이상 짝수 달)
        else if ((m <= 7 && m % 2 == 1) || (m >= 8 && m % 2 == 0)) {
            if (d >= 1 && d <= 31) return true;
        }
        // 3. 30일까지 있는 달 (나머지 4, 6, 9, 11월)
        else {
            if (d >= 1 && d <= 30) return true;
        }
    }

    return false; // 위 조건들에 하나도 맞지 않으면 가짜 날짜
}

int main() {
    int m, d;
    cin >> m >> d;

    if (is_date(m, d)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}