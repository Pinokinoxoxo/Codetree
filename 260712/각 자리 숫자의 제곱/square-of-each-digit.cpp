#include <iostream>
using namespace std;

int sum_sq(int n) {
    if (n < 10)
        return n * n;
    return sum_sq(n / 10) + (n % 10) * (n % 10);
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    cout << sum_sq(n);
    return 0;
}