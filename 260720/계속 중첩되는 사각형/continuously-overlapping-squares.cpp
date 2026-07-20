#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[205][205] = {0};

    for (int i = 1; i <= n; i++) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if (i % 2 == 1) { //red box
            for (int j = 100 + x1; j < 100 + x2; j++) {
                for (int k = 100 + y1; k < 100 + y2; k++) {
                    arr[j][k] = 1;
                }
            }
        }
        else if (i % 2 == 0) { //blue box
            for (int j = 100 + x1; j < 100 + x2; j++) {
                for (int k = 100 + y1; k < 100 + y2; k++) {
                    arr[j][k] = 2;
                }
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < 205; i++) {
        for (int j = 0; j < 205; j++) {
            if (arr[i][j] == 2) cnt++;
        }
    }

    cout << cnt;
    return 0;
}