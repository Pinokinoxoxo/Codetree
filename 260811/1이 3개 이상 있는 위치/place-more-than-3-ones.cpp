#include <iostream>
using namespace std;

int n;
int grid[105][105];
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int cnt_range = 0;
            for (int k = 0; k < 4; k++) {
                int nx = i + dx[k];
                int ny = j + dy[k];
                if (InRange(nx, ny) && grid[nx][ny] == 1) {
                    cnt_range++;
                }
            }
            if (cnt_range >= 3) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}