#include <iostream>

using namespace std;

int n, m;

int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};

int x = 0, y = 0, dir = 3;

int map[100][100] = {};

int cnt = 1;

bool inRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < m);
}

int main() {
    cin >> n >> m;

    // Please write your code here.

    map[x][y] = 1;

    while (cnt < n * m) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (!inRange(nx, ny) || map[nx][ny]) {
            dir = (dir + 1) % 4;
            nx = x + dx[dir];
            ny = y + dy[dir];
        }

        x = nx;
        y = ny;

        cnt++;
        map[x][y] = cnt;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << map[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}