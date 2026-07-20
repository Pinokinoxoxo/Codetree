#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[205][205] = {0};
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x1, y1;
        cin >> x1 >> y1;

        for (int j = 100 + x1; j < 100 + x1 + 8; j++) {
            for (int k = 100 + y1; k < 100 + y1 + 8; k++) {
                if (arr[j][k] == 0) arr[j][k]++;
            }
        }
    }

    int cnt = 0;

    for (int i = 0; i < 205; i++) {
        for (int j = 0; j < 205; j++) {
            if (arr[i][j] != 0) cnt++;
        }
    }

    cout << cnt;
    return 0;
}