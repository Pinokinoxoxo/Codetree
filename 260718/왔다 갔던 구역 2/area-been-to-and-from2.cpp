#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[2005] = {0};
    int point = 1000;

    for (int i = 0; i < n; i++) {
        int l;
        char d;
        cin >> l >> d;

        if (d == 'L') {
            for (int j = point - 1; j >= point - l; j--) {
                arr[j]++;
            }
            point -= l;
        }
        else if (d == 'R') {
            for (int j = point; j < point + l; j++) {
                arr[j]++;
            }
            point += l;
        }
    }

    int ans = 0;
    for (int i = 0; i < 2005; i++) {
        if (arr[i] > 1) {
            ans++;
        }
    }

    cout << ans;
    return 0;
}