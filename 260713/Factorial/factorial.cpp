#include <iostream>

using namespace std;

int N;

int fact(int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    if (n >= 2) {
        return n * fact(n - 1);
    }
}

int main() {
    cin >> N;

    // Please write your code here.
    cout << fact(N);

    return 0;
}