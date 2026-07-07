#include <iostream>

using namespace std;

int n, m;

void calcul(int n, int m) {
    int cnt;
    if ( n >= m) {
        for (int i = 1; i <= m; i++) {
            if (n % i == 0 && m % i == 0) {
                cnt = i;
            }
        }
    }
    else {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0 && m % i == 0) {
                cnt = i;
            }
        }
    }
    cout << cnt;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    calcul(n, m);
    return 0;
}