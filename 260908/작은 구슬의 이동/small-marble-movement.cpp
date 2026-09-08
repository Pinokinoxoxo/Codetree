#include <iostream>

using namespace std;

int n, t;
int r, c;
int dir, nx, ny;
char d;

int dx[4] = {0, 1, -1, 0}, dy[4] = {1, 0, 0, -1};

int main() {
    cin >> n >> t;
    cin >> r >> c >> d;

    if (d == 'R') {
        dir = 0;
    }
    else if (d == 'D') {
        dir = 1;
    }
    else if (d == 'U') {
        dir = 2;
    }
    else if (d == 'L') {
        dir = 3;
    }

    // Please write your code here.
    for (int i = 0; i < t; i++) {
        nx = r + dx[dir];
        ny = c + dy[dir];

        if (nx < 1 || ny < 1 || nx > n || ny > n) {
            dir = (3 - dir);
        }
        else {
            r = nx;
            c = ny;
        }
    }

    cout << r << " " << c;

    return 0;
}