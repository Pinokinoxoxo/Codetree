#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr_w[200005] = {0};
    int arr_b[200005] = {0};

    char last[200005] = {0};

    int point = 100000;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int l;
        char d;
        cin >> l >> d;
        if (d == 'L') {
            for (int j = point; j > point - l; j--) {
                arr_w[j]++;
                last[j] = 'w';
            }
            point = point - l + 1;
        }
        else if (d == 'R') {
            for (int j = point; j < point + l; j++) {
                arr_b[j]++;
                last[j] = 'b';
            }
            point = point + l - 1;
        }
    }

    int w = 0;
    int b = 0;
    int g = 0; 

    for (int i = 0; i < 200005; i++) {
        if (arr_w[i] >= 2 && arr_b[i] >= 2) {
            g++;
        }
        else if (last[i] == 'b') {
            b++;
        }
        else if (last[i] == 'w') {
            w++;
        }
    }

    cout << w << " " << b << " " << g;
    return 0;
}