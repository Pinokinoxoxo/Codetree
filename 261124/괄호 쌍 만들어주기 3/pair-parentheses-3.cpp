#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    // Please write your code here.
    int max_sum = 0;

    for (int i = 0; i < A.length(); i++) {
        for (int j = i + 1; j < A.length(); j++) {
            if (A[i] == '(' && A[j] == ')') {
                max_sum++;
            }
        }
    }

    cout << max_sum;

    return 0;
}