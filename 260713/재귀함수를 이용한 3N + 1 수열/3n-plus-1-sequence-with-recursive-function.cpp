#include <iostream>

using namespace std;

int n;
int cnt = 0;

int count_to_1(int n) {
    if (n == 1) return cnt;

    if (n % 2 == 0) {
        int tmp = n / 2;
        cnt++;
        return count_to_1(tmp);
    }
    else {
        int tmp2 = n * 3 + 1;
        cnt++;
        return count_to_1(tmp2);
    }
}

int main() {
    cin >> n;

    // Please write your code here.
    cout << count_to_1(n);

    return 0;
}