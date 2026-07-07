#include <iostream>
using namespace std;

bool is_fine_second(int n) {
    if (n % 10 == 5) return true;
    return false;
}

bool is_fine_thrid(int n) {
    if (n % 3 == 0 && n % 9 != 0) return true;
    return false;
}

bool is_finenum(int n) {
    if (n % 2== 0 || is_fine_second(n) || is_fine_thrid(n)) {
        return false;
    }
    return true;
}

int count_finenum(int a, int b) {
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (is_finenum(i)) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    cout << count_finenum(a, b);
    return 0;
}