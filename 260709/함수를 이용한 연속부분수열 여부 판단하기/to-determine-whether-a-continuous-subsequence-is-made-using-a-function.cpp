#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

bool is_match(int start_idx) {
    for (int j = 0; j < n2; j++) {
        if (a[start_idx + j] != b[j]) {
            return false;
        }
    }
    return true;

}
bool is_subsequence() {
    for (int i = 0; i <= n1 - n2; i++) {
        if (is_match(i)) {
            return true;
        }

    }
    return false;
}
int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    // Please write your code here.
    if (is_subsequence()) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}