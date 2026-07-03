#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a[10];
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < 10; j++) {
        cout << a[9 - j];
    }
    return 0;
}