#include <iostream>
using namespace std;

int n;
int cnt = 0;

int count_n(int n) {
    if (n == 1) return 2;
    else if (n == 2) return 4;
    
    if (n > 2) {
        return (count_n(n - 2) * count_n(n - 1)) % 100;
    }
    
}

int main() {
    // Please write your code here.
    cin >> n;

    cout << count_n(n);
    return 0;
}