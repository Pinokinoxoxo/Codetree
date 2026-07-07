#include <iostream>
using namespace std;

int calfunc(int a, int b, int c) {
    int ans;
    if (a < b) {
        if (b < c) {
            ans = a;
        }
        else {
            if (a < c) {
                ans = a;
            }
            else ans = c;
        }
    }
    else {
        if (c < b) {
            ans = c;
        }
        else {
            ans = b;
        }
    }
    return ans;
}



int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    cout << calfunc(a, b, c);
    return 0;
}