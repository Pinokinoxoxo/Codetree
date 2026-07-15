#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    string a, b;
    cin >> a >> b;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int n1 = a.length();
    int n2 = b.length();
    bool num = true;

    if (a > b) {
        for (int i = 0; i < n1; i++) {
            if (a[i] != b[i]) {
                cout << "No";
                num = false;
                break;
            }
        }
    }
    else {
        for (int i = 0; i < n2; i++) {
            if (a[i] != b[i]) {
                cout << "No";
                num = false;
                break;
            }
        }
    }
    if (num) cout << "Yes";
    return 0;
}