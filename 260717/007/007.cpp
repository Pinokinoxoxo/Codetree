#include <iostream>
using namespace std;

class code {
    public:
        string c;
        char p;
        int t;

        code(string code, char point, int time) {
            this->c = code;
            this->p = point;
            this->t = time;
        }
};

int main() {
    // Please write your code here.
    string a;
    char b;
    int c;
    cin >> a >> b >> c;
    code code1 = code(a, b, c);
    cout << "secret code : " << a << endl;
    cout << "meeting point : " << b << endl;
    cout << "time : " << c << endl;
    return 0;
}