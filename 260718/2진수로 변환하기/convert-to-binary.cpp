#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int digit[100] = {};
    int cnt = 0;
    cin >> n;

    while (true) {
        if (n < 2) {
            digit[cnt++] = n;
            break;
        }
        digit[cnt++] = n % 2;
        n /= 2;
    }

    for (int i = cnt - 1; i >= 0; i--) {
        cout << digit[i];
    }

    return 0;
}