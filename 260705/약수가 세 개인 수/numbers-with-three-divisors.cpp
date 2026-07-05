#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int start, end;
    int cnt_tot = 0;
    cin >> start >> end;
    for (int i = start; i <= end; i++) {
        int cnt = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                cnt++;
            }
        }
        if (cnt == 3) {
            cnt_tot++;
        }
    }
    cout << cnt_tot;
    return 0;
}