#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

string a;

int max_sum = 0;

int main() {
    cin >> a;

    int len = a.length();

    for (int i = 0; i < len; i++) {
        char original = a[i];
        if (a[i] == '0') {
            a[i] = '1';
        }
        else {
            a[i] = '0';
        }

        int val = 0;

        for (int j = 0; j < len; j++) {
            if (a[j] == '1') {
                val += pow(2, len - 1 - j);
            }
        }

        max_sum = max(max_sum, val);

        a[i] = original;


    }

    cout << max_sum;

    return 0;
}