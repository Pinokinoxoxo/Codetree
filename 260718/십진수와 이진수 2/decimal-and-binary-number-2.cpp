#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string binary;
    cin >> binary;
    int cnt = 0;

    for (int i = 0; i < binary.length(); i++) {
        int tmp = binary[i] - '0';
        cnt = cnt * 2 + tmp;
    }

    cnt *= 17;
    int digit[1000] = {};
    int cnt1 = 0;

    while(true) {
        if (cnt < 2) {
            digit[cnt1++] = cnt;
            break;
        }
        digit[cnt1++] = cnt % 2;
        cnt /= 2;
    }

    for (int i = cnt1 - 1; i >= 0; i--) {
        cout << digit[i];
    }
    return 0;
}