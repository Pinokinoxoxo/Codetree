#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n, k;
    string t;
    cin >> n >> k >> t;
    string arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].find(t) == 0) {
            cnt++;
        }
        if (cnt == k) {
            cout << arr[i];
            break;
        }
    }

    return 0;
}