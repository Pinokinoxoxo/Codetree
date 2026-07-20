#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int arr[205][205] = {0};
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for (int j = 100 + x1; j <= 100 + x2 - 1; j++) {
            for (int k = 100 + y1; k <= 100 + y2 - 1; k++) {
                if (arr[j][k] == 0) arr[j][k]++;
            }
        }

    }

    int cnt = 0;

    for (int i = 0; i < 205; i++) {
        for (int j = 0; j <205; j++) {
            if (arr[i][j] != 0) cnt++;
        }
    }

    cout << cnt;
    return 0;
}