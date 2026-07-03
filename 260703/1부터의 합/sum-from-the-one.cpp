#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, cnt, ans;
    cin >> n;
    cnt = 0;
    for (int i = 1; i <= 100; i++) {
        cnt += i;
        if (cnt >= n) {
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}