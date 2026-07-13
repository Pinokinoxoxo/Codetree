#include <iostream>

using namespace std;

int n;
int arr[100];

int findmax(int cnt) {
    if (cnt == 1) {
        return arr[0];
    }
    int max = findmax(cnt - 1);

    if (arr[cnt - 1] > max) {
        return arr[cnt - 1];
    }
    else {
        return max;
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    cout << findmax(n);

    return 0;
}