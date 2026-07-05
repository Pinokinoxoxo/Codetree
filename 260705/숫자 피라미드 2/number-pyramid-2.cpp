#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int cnt = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << cnt << " ";
            cnt++;
        }
        cout << "\n";
    }
    return 0;
}