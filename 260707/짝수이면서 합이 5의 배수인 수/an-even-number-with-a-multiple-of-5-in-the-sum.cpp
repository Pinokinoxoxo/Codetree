#include <iostream>
using namespace std;

int fcount(int n) {
    int a = n / 10;
    int b = n % 10;
    return n % 2 == 0 && (a + b) % 5 == 0;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    if (fcount(n)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}