#include <iostream>

using namespace std;

int n, m;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int cnt = 0;
int dir = 0;
int x = 0, y = 0;

char map[100][100] = {};

bool inRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < m);
}


int main() {
    cin >> n >> m;

    // Please write your code here.
    map[x][y] = 'A';

    for (cnt = 1; cnt < n * m; cnt++) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (!inRange(nx, ny) || map[nx][ny] != 0) {
            dir = (dir + 1) % 4;

            nx = x + dx[dir];
            ny = y + dy[dir];
        }

        x = nx;
        y = ny;

        map[x][y] = 'A' + cnt % 26;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << map[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
