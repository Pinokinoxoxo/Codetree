#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string binary;
    cin >> binary;

    int num = 0;

    for (int i = 0; i < binary.length(); i++) {
        int digit = binary[i] - '0';
        num = num * 2 + digit;
    }

    cout << num;
    
    return 0;
}