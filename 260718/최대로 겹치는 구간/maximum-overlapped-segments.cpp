#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[205] = {0};

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (a < b) {
            for (int i = a + 100; i < b + 100; i++) {
                arr[i]++;
            }
        }
        else {
            for (int i = b + 100; i < a + 100; i++) {
                arr[i]++;
            }
        }
    }

    int cov = 0;

    for (int i = 0; i < 205; i++) {
        if (cov < arr[i]) {
            cov = arr[i];
        }
    }

    cout << cov;

    
    return 0;
}