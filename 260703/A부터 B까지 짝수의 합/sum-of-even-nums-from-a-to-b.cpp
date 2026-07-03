#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    int tot = 0;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 1) {
            continue;
        }
        tot += i;
    }
    cout << tot;
    return 0;
}