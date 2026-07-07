#include <iostream>

using namespace std;

int n, m;

void calcul(int n, int m) {
    int cnt;
    if (n > m) cnt = n;
    else cnt = m;
    for (int i = cnt; ; i++) {
        if (i % n == 0 && i % m == 0) {
            cout << i;
            break;
        }
    }
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    calcul(n, m);

    return 0;
}