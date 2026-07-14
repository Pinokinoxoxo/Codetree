#include <iostream>
using namespace std;

int n;
int arr[10];

int get_lcm(int a, int b, int c) {
    if (c % b == 0) {
        return c;
    }
    return get_lcm(a, b, c + a);
}

int get_least(int n) {
    if (n == 0) {
        return arr[0];
    }
    int prev = get_least(n - 1);
    return get_lcm(prev, arr[n], prev);
}


int main() {
    // Please write your code here.
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << get_least(n - 1);
    return 0;
}