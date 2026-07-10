#include <iostream>
using namespace std;

bool is_yoon(int y) {
    if (y % 4 == 0) {
        if (y % 100 == 0 && y % 400 == 0) return true;
        if (y % 100 == 0) return false;
        return true;
    }
    return false;
}

bool is_day_corr(int m, int d) {
    if (m > 0 && m < 8) {
        if (m % 2 == 1) {
            if (d > 0 && d < 32) return true;
        }
        else if (d > 0 && d < 31) return true;
        return false;
    }
    else if (m > 8 && m < 13) {
        if (m % 2 == 0) {
            if (d > 0 && d < 32) return true;
        }
        else if (d > 0 && d < 31) return true;
        return false;
    }
}

int what_sisson(int y, int m, int d) {
    if (m > 2 && m < 6) {
        if (is_day_corr(m, d)) {
            return 1;
        }
        return -1;
    }
    else if (m > 5 && m < 9) {
        if (is_day_corr(m, d)) {
            return 2;
        }
        return -1;
    }
    else if (m > 8 && m < 12) {
        if (is_day_corr(m, d)) {
            return 3;
        }
        return -1;
    }
    else if (m == 2) {
        if (is_yoon(y) && d > 0 && d < 30) {
            return 4;
        }
        else if (d > 0 && d < 29) {
            return 4;
        }
        return -1;
    }
    else if (m == 12 || m == 1) {
        if (is_day_corr(m, d)) {
            return 4;
        }
        return -1;
    }
    else return -1;
}
int main() {
    // Please write your code here.
    int y, m, d;
    cin >> y >> m >> d;
    if (what_sisson(y, m, d) == 1) {
        cout << "Spring";

    }
    else if (what_sisson(y, m, d) == 2) {
        cout << "Summer";

    }
    else if (what_sisson(y, m, d) == 3) {
        cout << "Fall";

    }
    else if (what_sisson(y, m, d) == 4) {
        cout << "Winter";

    }
    else cout << -1;
    return 0;
}