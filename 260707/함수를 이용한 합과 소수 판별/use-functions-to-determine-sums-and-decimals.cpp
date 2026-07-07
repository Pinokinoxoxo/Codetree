#include <iostream>
using namespace std;

bool is_prime(int n) {
    if (n < 2) return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }

    return true;
}

bool all_even(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return (sum % 2 == 0);
}

int count_ans(int a, int b) {
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (is_prime(i) && all_even(i)) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    cout << count_ans(a, b);
    return 0;
}