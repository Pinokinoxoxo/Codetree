#include <iostream>
using namespace std;

int func(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        cnt += i;
    }
    int ans = cnt / 10;
    return ans;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    cout << func(n);
    return 0;
}