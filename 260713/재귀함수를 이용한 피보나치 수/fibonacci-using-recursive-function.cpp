#include <iostream>
using namespace std;

int pip(int n) {
    if (n == 2) {
        return 1;
    }
    if (n == 1) {
        return 1;
    }
    if (n > 2) {
        return pip(n - 2) + pip(n - 1);
    }
}
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    cout << pip(n);
    return 0;
}