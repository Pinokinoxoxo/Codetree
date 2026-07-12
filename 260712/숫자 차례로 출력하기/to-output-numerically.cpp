#include <iostream>
using namespace std;

void print_count(int a) {
    if (a == 0) return;
    else {
        print_count(a - 1);
        cout << a << " ";
    }
}

void print_count_rev(int a) {
    if (a == 0) return;
    else {
        cout << a << " ";
        print_count_rev(a - 1);
    }
    cout << endl;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    print_count(n);
    cout << endl;
    print_count_rev(n);
    return 0;
}