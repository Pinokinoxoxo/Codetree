#include <iostream>
#include <string>

using namespace std;

int N, T;
string str;
int board[100][100];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int x = 0, y = 0;
int dir = 0;
int sum = 0;

bool inRange(int x, int y) {
    return (0 <= x && x < N && 0 <= y && y < N);
}

int main() {
    cin >> N >> T;
    cin >> str;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }

    x = N / 2;
    y = N / 2;

    sum = board[x][y];

    for (int k = 0; k < T; k++) {
        if (str[k] == 'R') {
            dir = (dir + 3) % 4;
        }
        else if (str[k] == 'L') {
            dir = (dir + 1) % 4;
        }
        else if (str[k] == 'F') {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if(inRange(nx, ny)) {
                x = nx;
                y = ny;
                sum += board[x][y];
            }
        }
    }

    cout << sum;
    // Please write your code here.

    return 0;
}