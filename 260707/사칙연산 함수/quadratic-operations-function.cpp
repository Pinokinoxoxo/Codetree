#include <iostream>

using namespace std;

int a;
int c;
char o;


int calfunc(int a, char o, int b) {
    int cnt;
    if (o == '+') {
        cnt = a + b;
    }
    else if (o == '-') {
        cnt = a - b;
    }
    else if (o == '/') {
        cnt = a / b;
    }
    else if (o == '*') {
        cnt = a * b;
    }
    return cnt;
}

bool calok (char o) {
    if (o == '+' || o == '-' || o == '*' || o == '/') return true;
    return false;
}

int main() {
    cin >> a >> o >> c;

    // Please write your code here.
    if (calok(o)) {
        cout << a << " " << o << " " << c << " = " << calfunc(a, o, c);
    }
    else {
        cout << "False";
    }

    return 0;
}