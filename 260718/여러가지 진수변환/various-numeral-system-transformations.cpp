#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, b;
    cin >> n >> b;
    int ans[1000] = {};
    int cnt = 0;

    while (true) {
        if (n < b) {
            ans[cnt++] = n;
            break;
        }
        ans[cnt++] = n % b;
        n /= b;
    }

    for (int i = cnt - 1; i >= 0; i--) {
        cout << ans[i];
    }
    return 0;
}