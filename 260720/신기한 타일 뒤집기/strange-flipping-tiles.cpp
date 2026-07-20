#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr_w[20005] = {0};
    int arr_b[20005] = {0};
    char arr_current[20005] = {0};
    int point = 10000;

    for (int i = 0; i < n; i++) {
        int l;
        char d;
        cin >> l >> d;
        if (d == 'L') {
            for (int j = point; j > point - l; j--) {
                arr_w[j]++;
                arr_current[j] = 'w';
            }
            point = point - l + 1;
        }
        else if (d == 'R') {
            for (int j = point; j < point + l; j++) {
                arr_b[j]++;
                arr_current[j] = 'b';
            }
            point = point + l - 1;
        }
    }

    int w = 0;
    int b = 0;

    for (int i = 0; i < 20005; i++) {
        if (arr_current[i] == 'w') w++;
        if (arr_current[i] == 'b') b++;
    }

    cout << w << " " << b;
    return 0;
}