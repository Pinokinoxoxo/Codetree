#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str_1 = "apple";
    string str_2 = "banana";
    string str_3 = "grape";
    string str_4 = "blueberry";
    string str_5 = "orange";
    char n;
    int cnt = 0;
    cin >> n;
    if (str_1[2] == n || str_1[3] == n) {
        cnt++;
        cout << str_1 << "\n";
    }
    if (str_2[2] == n || str_2[3] == n) {
        cnt++;
        cout << str_2 << "\n";
    }
    if (str_3[2] == n || str_3[3] == n) {
        cnt++;
        cout << str_3 << "\n";
    }
    if (str_4[2] == n || str_4[3] == n) {
        cnt++;
        cout << str_4 << "\n";
    }
    if (str_5[2] == n || str_5[3] == n) {
        cnt++;
        cout << str_5 << "\n";
    }
    cout << cnt;
    return 0;
}