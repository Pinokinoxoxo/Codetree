#include <iostream>

using namespace std;

int N;
char dir[100];
int dist[100];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int x = 0, y = 0;
int dir_num = 0;
int dist_time = 0;

int diraction(char a) {
    if (a == 'E')
        return 0;
    else if (a == 'S')
        return 1;
    else if (a == 'W')
        return 2;
    else
        return 3; 
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> dir[i] >> dist[i];
    }

    // Please write your code here.

    for (int j = 0; j < N; j++) {
        dir_num = diraction(dir[j]);

        for (int k = 0; k < dist[j]; k++) {
            x = x + dx[dir_num];
            y = y + dy[dir_num];

            dist_time++;

            if (x == 0 && y == 0) {
                cout << dist_time;
                return 0;
            }
        }
    }

    cout << -1;




    return 0;
}