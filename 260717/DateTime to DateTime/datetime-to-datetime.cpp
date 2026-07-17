#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B, C;

    cin >> A >> B >> C;

    int start_min = (11 * 24 * 60) + (11 * 60) + 11;
    int end_min = (A * 24 * 60) + (B * 60) + C;

    int diff = end_min - start_min;

    if(diff < 0) cout << -1;
    else cout << diff;
    return 0;
}