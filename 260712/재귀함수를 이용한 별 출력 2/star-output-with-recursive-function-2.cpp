#include <iostream>
using namespace std;

int n;

void print_star(int n) {
    if (n == 0) return;

    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << endl;
    print_star(n - 1);
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << endl;
}

int main() {
    // Please write your code here.
    cin >> n;
    print_star(n);
    return 0;
}