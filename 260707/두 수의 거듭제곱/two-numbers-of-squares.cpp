#include <iostream>
using namespace std;

int squarefunc(int a, int b) {
    int cnt = 1;
    for (int i = 1; i <= b; i++) {
        cnt *= a;
    }
    return cnt;
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    cout << squarefunc(a, b);
    return 0;
}