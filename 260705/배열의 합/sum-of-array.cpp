#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int mat[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < 4; i++) {
        int cnt = 0;
        for (int j = 0; j < 4; j++) {
            cnt += mat[i][j];
        }
        cout << cnt << "\n";
    }
    return 0;
}