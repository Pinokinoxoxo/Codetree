#include <iostream>
#include <string>

using namespace std;

string A;

int alphabet_count(string &s) {
    int n = s.length();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s[i] != s[j] && i != j) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    cin >> A;

    // Please write your code here.
    if (alphabet_count(A) > 1) {
        cout << "Yes";
    }
    else cout << "No";

    return 0;
}