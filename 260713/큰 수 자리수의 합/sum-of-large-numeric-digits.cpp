#include <iostream>
using namespace std;

int a, b, c;

int cal(int a, int b, int c) {
    int num = a * b * c;
    return num;
}

int cal_num(int n) {
    if (n < 10) return n;

    return cal_num(n / 10) + (n % 10);
}

int main() {
    // Please write your code here.
    cin >> a >> b >> c;

    cout << cal_num(cal(a, b, c));

    return 0;
}