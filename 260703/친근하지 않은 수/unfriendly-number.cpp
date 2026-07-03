#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, cnt;
    cnt = 0;
    cin >> n;

    for (int i = 0; i <= n; i++) {
        if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0) continue;
        cnt++;
    }

    cout << cnt;

    return 0;
}