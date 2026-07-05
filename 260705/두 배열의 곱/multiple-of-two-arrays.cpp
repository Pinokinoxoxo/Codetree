#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int mat1[3][3];
    int mat2[3][3];
    for (int i = 0; i <3; i++) {
        for (int j = 0; j <3; j++) {
            cin >> mat1[i][j];
        }
    }
    for (int i = 0; i <3; i++) {
        for (int j = 0; j <3; j++) {
            cin >> mat2[i][j];
        }
    }
    for (int i = 0; i <3; i++) {
        for (int j = 0; j <3; j++) {
            cout << mat1[i][j] * mat2[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}