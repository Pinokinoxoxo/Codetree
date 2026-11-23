#include <iostream>

using namespace std;

int n;
int grid[100][100];
int cnt = 1;
int x = 0, y = 0;

int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};
int dir = 0;

bool inRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    cin >> n;

    // Please write your code here.
    x = n / 2;
    y = n / 2;

    grid[x][y] = 1;

    for (cnt = 2; cnt <= n * n; cnt++) {

        x += dx[dir];
        y += dy[dir];

        grid[x][y] = cnt;

        int nextdir = (dir + 1) % 4;

        int nx = x + dx[nextdir];
        int ny = y + dy[nextdir];

        if (inRange(nx, ny) && grid[nx][ny] == 0) {
            dir = nextdir;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j] << ' ';
        }
        cout << endl;
    }


    return 0;
}
