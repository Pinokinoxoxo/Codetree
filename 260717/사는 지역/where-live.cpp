#include <iostream>
#include <algorithm>
using namespace std;

class Profile {
    public:
        string n;
        string a;
        string r;

        Profile(string name, string address, string region) {
            this->n = name;
            this->a = address;
            this->r = region;
        }

        Profile() {}
};

bool cmp(Profile a, Profile b) {
    return a.n > b.n;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    Profile profiles[n];

    for (int i = 0; i < n; i++) {
        string a, b, c;
        cin >> a >> b >> c;
        profiles[i] = Profile(a, b, c);
    }

    sort(profiles, profiles + n, cmp);

    cout << "name " << profiles[0].n << endl << "addr " << profiles[0].a << endl << "city " << profiles[0].r;

    return 0;
}