#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int mat[4][4];
    int tot = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (j > i) continue;
            else {
                tot += mat[i][j];
            }
        }
    }
    cout << tot;
    return 0;
}