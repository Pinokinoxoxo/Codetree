#include <iostream>
using namespace std;

int dx[4] = {1, 0, -1, 0}, dy[4] ={0, -1, 0, 1};
int x = 0, y = 0;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        char d;
        int l;
        cin >> d >> l;
        if (d == 'E') {
            x = x + dx[0] * l;
            y = y + dy[0] * l;
        }
        else if (d == 'S') {
            x = x + dx[1] * l;
            y = y + dy[1] * l;
        }
        else if (d == 'W') {
            x = x + dx[2] * l;
            y = y + dy[2] * l;
        }
        else if (d == 'N') {
            x = x + dx[3] * l;
            y = y + dy[3] * l;
        }
    }
    cout << x << " " << y;
    return 0;
}