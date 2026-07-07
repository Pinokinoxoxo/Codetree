#include <iostream>
using namespace std;

bool is_yoon(int a) {
    if (a % 4 == 0) {
        if (a % 100 == 0 && a % 400 != 0) {
            return false;
        }
        return true;
    }
    return false;
}

int main() {
    // Please write your code here.
    int y;
    cin >> y;
    if (is_yoon(y)) {
        cout << "true";
    }
    else cout << "false";
    return 0;
}