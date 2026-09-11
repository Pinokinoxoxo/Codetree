#include <iostream>

using namespace std;

int n, m;
int arr[100][100];
int ans[100][100] = {0};

int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

int x = 0, y = 0;
int dir = 0;
int num = 1;

bool inrange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < m);
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    ans[x][y] = 1;

    for (int i = 0; i < n * m - 1; i++) {
        num++;
        int nx = x + dx[dir], ny = y + dy[dir];

        if (!inrange(nx, ny) || ans[nx][ny] != 0) {
            dir = (dir + 1) % 4;
        }
        x = x + dx[dir];
        y = y + dy[dir];
        ans[x][y] = num;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}