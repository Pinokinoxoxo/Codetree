#include <iostream>

using namespace std;

int N;

int strange(int n) {
    if (n == 1) return 1;
    else if (n == 2) return 2;
    if (n > 2) {
        return strange(n / 3) + strange(n - 1);
    }
}

int main() {
    cin >> N;

    // Please write your code here
    cout << strange(N);

    return 0;
}