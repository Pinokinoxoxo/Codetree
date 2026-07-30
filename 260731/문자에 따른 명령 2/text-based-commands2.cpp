#include <iostream>
using namespace std;

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};
int x = 0, y = 0;
int dir_num = 3;
string order;

int main() {
    // Please write your code here.
    cin >> order;
    int num_length = order.length();

    for (int i = 0; i < num_length; i++) {
        if (order[i] == 'L') {
            dir_num = (dir_num + 3) % 4;

        }
        else if (order[i] == 'R') {
            dir_num = (dir_num + 1) % 4;
        }
        else if (order[i] == 'F') {
            x += dx[dir_num];
            y += dy[dir_num];
        }
    }

    cout << x << " " << y;

    return 0;
}