#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int mat[3][3];
    int n;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> n;
            mat[i][j] = 3 * n;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}