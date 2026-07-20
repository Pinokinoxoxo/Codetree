#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[2005][2005] = {0};

    for (int i = 0; i < 2; i++) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        for (int j = 1000 + x1; j < 1000 + x2; j++) {
            for (int k = 1000 + y1; k < 1000 + y2; k++) {
                arr[j][k]++;
            }
        }
    }
    int mx1, mx2, my1, my2;
    cin >> mx1 >> my1 >> mx2 >> my2;

    for (int a = 1000 + mx1; a < 1000 + mx2; a++) {
        for (int b = 1000 + my1; b < 1000 + my2; b++) {
                arr[a][b] = 0;
        }
    }

    int cnt = 0;

    for (int i = 0; i < 2005; i++) {
        for (int j = 0; j < 2005; j++) {
            if (arr[i][j] != 0) cnt++;
        }
    }

    cout << cnt;

    return 0;
}