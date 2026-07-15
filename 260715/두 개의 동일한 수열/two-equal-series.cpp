#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int A[n], B[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    sort(A, A + n);
    sort(B, B + n);
    bool yes = true;

    for (int i = 0; i < n; i++) {
        if (A[i] != B[i]) {
            cout << "No";
            yes = false;
            break;
        }
    }
    if (yes) cout << "Yes";
    return 0;
}