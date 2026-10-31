#include <iostream>

using namespace std;

int N, M;
int r[10000], c[10000];
int map[101][101] = {};
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool inRange(int x, int y) {
    return (0 < x && x <= N && 0 < y && y <= N);
}

int main() {
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        cin >> r[i] >> c[i];
    }

    // Please write your code here.
    for (int j = 0; j < M; j++) {
        map[r[j]][c[j]] = 1;

        int cnt = 0;
        
        for (int k = 0; k < 4; k++) {
            int nx = r[j] + dx[k];
            int ny = c[j] + dy[k];

            if (inRange(nx, ny) && map[nx][ny]) {
                cnt++;
            }
        }

        if (cnt == 3) {
            cout << 1 << endl;
        }
        else
            cout << 0 << endl;
    }

    return 0;
}