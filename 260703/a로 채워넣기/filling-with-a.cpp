#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str1;
    cin >> str1;
    int len1 = str1.length();

    str1[1] = 'a';
    str1[len1 - 2] = 'a';

    cout << str1;
    return 0;
}