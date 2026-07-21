#include <iostream>
using namespace std;

int student[105] = {0};


int main() {
    // Please write your code here.
    int n, m, k;
    cin >> n >> m >> k;

    int ans = -1;

    for (int i = 1; i <= m; i++) {
        int num;
        cin >> num;
        student[num]++;

        if (student[num] >= k) {
            ans = num;
            break;
        }
    }

    cout << ans;
    
    return 0;
}