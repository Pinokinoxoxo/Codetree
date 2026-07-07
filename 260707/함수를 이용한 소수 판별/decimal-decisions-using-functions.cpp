#include <iostream>
using namespace std;

bool is_prime(int n) {
    for (int i = n - 1; i > 1; i--) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int sum_prime(int a, int b) {
    int cnt = 0;
    for (int i = a; i <=b; i++) {
        if (is_prime(i)) {
            cnt += i;
        }
    }
    return cnt;
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    cout << sum_prime(a, b);
    return 0;
}