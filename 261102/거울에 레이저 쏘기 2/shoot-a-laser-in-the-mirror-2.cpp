#include <iostream>

using namespace std;

int n;
char grid[1001][1001];
int k;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int slash[4] = {3, 2, 1, 0};
int backslash[4] = {1, 0, 3, 2};

int x, y, dir;
int cnt = 0;

bool inRange(int x, int y) {
    return (0 < x && x <= n && 0 < y && y <= n);
}

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> grid[i][j];
        }
    }

    cin >> k;

    int side = (k - 1) / n;
    int pos = (k - 1) % n;

    // Please write your code here.
    if (side == 0) {
        x = 1;
        y = pos + 1;
        dir = 1;
    }
    else if (side == 1) {
        x = pos + 1;
        y = n;
        dir = 2;
    }
    else if (side == 2) {
        x = n;
        y = n - pos;
        dir = 3;
    }
    else {
        x = n - pos;
        y = 1;
        dir = 0;
    }

    while(inRange(x, y)) {
        if (grid[x][y] == '/') {
            dir = slash[dir];
        }
        else {
            dir = backslash[dir];
        }
        x += dx[dir];
        y += dy[dir];
        cnt++;
    }

    cout << cnt << endl;


    return 0;
}