#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    string n;
    cin >> a >> b;
    cin >> n;
    int todecimal = 0;

    for (int i = 0; i < n.length(); i++) {
        int tmp = n[i] - '0';
        todecimal = todecimal * a + tmp;
    }

    int arr[100] = {};
    int cnt = 0;

    while (true) {
        if (todecimal < b) {
            arr[cnt++] = todecimal;
            break;
        }
        arr[cnt++] = todecimal % b;
        todecimal /= b;
    }

    for (int i = cnt - 1; i >= 0; i--) {
        cout << arr[i];
    }
    return 0;
}