#include <iostream>
using namespace std;

int sum_N(int n) {
    if (n == 1) return 1;
    return sum_N(n - 1) + n;   
}

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    cout << sum_N(N);
    return 0;
}