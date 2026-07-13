#include <iostream>
using namespace std;

int n;
int cnt = 0;

int devide_func(int n) {
    if (n == 1) {
        return cnt;
    }
    if (n % 2 == 0 ) {
        n /= 2;
        cnt++;
    }
    else {
        n /= 3;
        cnt++;
    }
    devide_func(n);
    return cnt;
}

int main() {
    // Please write your code here.
    cin >> n;
    cout << devide_func(n);
    return 0;
}