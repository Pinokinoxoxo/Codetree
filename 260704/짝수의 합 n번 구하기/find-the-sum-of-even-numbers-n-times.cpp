#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, a, b;
    int cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cnt = 0;
        cin >> a >> b;
        for (int j = a; j <= b; j++) {
            if (j % 2 == 0) {
                cnt += j;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}