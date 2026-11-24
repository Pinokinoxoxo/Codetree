#include <iostream>
#include <cstdlib>
#include <climits>

using namespace std;

int n;
int A[100];

int min_sum = INT_MAX;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    for(int i = 0; i < n; i++) {
        int sum_diff = 0;

        for(int j = 0; j < n; j++) {
            sum_diff += A[j] * abs(i - j);
        }
        min_sum = min(min_sum, sum_diff);

    }

    cout << min_sum;


    return 0;
}