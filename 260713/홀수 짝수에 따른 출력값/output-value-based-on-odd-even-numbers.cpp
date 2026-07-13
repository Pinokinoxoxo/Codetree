#include <iostream>
using namespace std;

int cal_odd(int n) {
    if (n == 1) return 1;
    if (n % 2 == 0) return cal_odd(n - 1);

    return cal_odd(n - 1) + n;
}

int cal_even(int n) {
    if (n == 1) return 0;
    if (n % 2 == 1) return cal_even(n - 1);
    
    return cal_even(n - 1) + n;
}

int cal_num(int n) {
    int sum;
    if (n % 2 == 1) {
        return cal_odd(n);
    }
    else {
        return cal_even(n);
    }
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    cout << cal_num(n);
    return 0;
}