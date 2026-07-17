#include <iostream>
#include <algorithm>
using namespace std;

class Profile {
    public:
        string n;
        int a, b, c;

        Profile(string name, int a, int b, int c) {
            this->n = name;
            this->a = a;
            this->b = b;
            this->c = c;
        }

    Profile() {}
};

bool cmp(Profile a, Profile b) {
    return a.a + a.b + a.c < b.a + b.b + b.c;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    Profile profiles[n];

    for (int i = 0; i < n; i++) {
        string n;
        int a, b, c;
        cin >> n >> a >> b >> c;
        profiles[i] = Profile(n, a, b, c);
    }

    sort(profiles, profiles + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << profiles[i].n << " " << profiles[i].a << " " << profiles[i].b << " " << profiles[i].c << endl;
    }
    return 0;
}