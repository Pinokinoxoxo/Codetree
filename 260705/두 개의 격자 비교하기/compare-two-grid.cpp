#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;
    int mat1[n][m], mat2[n][m], mat3[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat1[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat2[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat1[i][j] == mat2[i][j]) {
                mat3[i][j] = 0;
            }
            else mat3[i][j] = 1;
            cout << mat3[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}