#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

string text;

int main() {
    // Please write your code here.
    cin >> text;
    sort(text.begin(), text.end());
    cout << text;
    



    return 0;
}