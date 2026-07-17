#include <iostream>
#include <algorithm>
using namespace std;

class Profile {
    public:
        string n;
        int k, e, m;

        Profile(string name, int korean, int english, int math) {
            this->n = name;
            this->k = korean;
            this->e = english;
            this->m = math;
        }
    Profile() {}
};

bool cmp(Profile a, Profile b) {
    if (a.k == b.k) {
        if(a.e == b.e) {
            return a.m > b.m;
        }
        return a.e > b.e;
    }
    return a.k > b.k;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    Profile profiles[n];

    for (int i = 0; i < n; i++) {
        string a;
        int b, c, d;
        cin >> a >> b >> c >> d;
        profiles[i] = Profile(a, b, c, d);
    }

    sort(profiles, profiles + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << profiles[i].n << " " << profiles[i].k << " " << profiles[i].e << " " << profiles[i].m << endl;
    }
    return 0;
}