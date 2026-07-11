#include <iostream>
using namespace std;

string N, M;

int findstring (string &n, string &m) {
    int tmp1 = n.length();
    int tmp2 = m.length();
    for (int i = 0; i <= tmp1 - tmp2; i++) {
        bool is_match = true;
        for (int j = 0; j < tmp2; j++) {
            if (n[i + j] != m[j]) {
                is_match = false;
                break;
            }
        }
        if (is_match) {
            return i;
        }
    }
    return -1;
}

int main() {
    // Please write your code here.
    cin >> N >> M;
    cout << findstring(N, M);
    return 0;
}