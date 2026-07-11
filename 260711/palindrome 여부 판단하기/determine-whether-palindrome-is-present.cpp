#include <iostream>
using namespace std;

bool is_string_right(string &s, int n) {
    for (int i = 0; i < n; i++) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;

}

int main() {
    // Please write your code here.
    string A;
    cin >> A;
    int n = A.length();
    if (is_string_right(A, n)) {
        cout << "Yes";
    }
    else cout << "No";
    return 0;
}