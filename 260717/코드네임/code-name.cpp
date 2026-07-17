#include <iostream>
#include <algorithm>
using namespace std;

class profile {
    public:
        char c;
        int s;

        profile(char codename, int score) {
            this->c = codename;
            this->s = score;
        }

        profile() {}
};

bool cmr(profile a, profile b) {
    return a.s < b.s;
}
int main() {
    // Please write your code here.
    profile profile1[5];
    for (int i = 0; i < 5; i++) {
        char code;
        int score;
        cin >> code >> score;
        profile1[i] = profile(code, score);
    }

    sort(profile1, profile1 + 5, cmr);

    cout << profile1[0].c << " " << profile1[0].s << endl;
    return 0;
}