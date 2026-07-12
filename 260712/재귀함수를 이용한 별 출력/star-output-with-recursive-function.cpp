#include <iostream>
using namespace std;

void print_star(int n) {
    if (n == 0) return;
    
    print_star(n - 1);
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
}
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    print_star(n);
    return 0;
}