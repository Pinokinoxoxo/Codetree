#include <iostream>
using namespace std;

void cal_num(int &a, int &b) {
    if (a > b) {
        a = a + 25;
        b = 2 * b;
    }
    else {
        b = b + 25;
        a = 2 * a;
    }
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    cal_num(a, b);
    cout << a << " " << b;
    return 0;
}