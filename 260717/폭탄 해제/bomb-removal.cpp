#include <iostream>
using namespace std;

class Solution {
    public:
        string code;
        char c;
        int s;

        Solution(string code, char color, int second) {
            this->code = code;
            this->c = color;
            this->s = second;
        }

        Solution() {}
};

int main() {
    // Please write your code here.
    string a;
    char b;
    int c;
    cin >> a >> b >> c;

    Solution solution(a, b, c);

    cout << "code : " << solution.code << endl;
    cout << "color : " << solution.c << endl;
    cout << "second : " << solution.s << endl;
    return 0;
}