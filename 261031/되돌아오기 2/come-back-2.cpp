#include <iostream>
#include <string>

using namespace std;

string commands;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int x = 0, y = 0;
int dir_num = 0;
int dist_time = 0;

int main() {
    cin >> commands;

    int len = commands.length();

    // Please write your code here.

    for (int i = 0; i < len; i++) {
        if (commands[i] == 'L') {
            dir_num = (dir_num + 3) % 4;
            dist_time++;
        }
        else if (commands[i] == 'R') {
            dir_num = (dir_num + 1) % 4;
            dist_time++;
        }
        else if (commands[i] == 'F') {
            x = x + dx[dir_num];
            y = y + dy[dir_num];
            dist_time++;
        }

        if (x == 0 && y == 0) {
            cout << dist_time;
            return 0;
        }
    }

    cout << -1;

    return 0;
}