#include <iostream>

using namespace std;

int N;

void count_num(int n) {
    if (n == 0) return;
    cout << n << " ";
    count_num (n - 1);
}

int main() {
    cin >> N;

    // Please write your code here.
    count_num(N);
    for (int i = 1; i < N + 1; i++) {
        cout << i << " ";
    }

    return 0;
}