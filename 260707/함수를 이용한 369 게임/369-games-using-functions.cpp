#include <iostream>
using namespace std;

bool func369(int n) {
    if (n ==0) return false;
    while (n > 0) {
        int rem = n % 10;
        if (rem == 3 || rem == 6 || rem == 9) return true;
        n /= 10;
    }
    return false;
}

int countnum(int a, int b) {
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (func369(i) || i % 3 == 0) cnt++;
    }
    return cnt;
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    cout << countnum(a, b);
    return 0;
}