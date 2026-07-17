#include <iostream>
#include <algorithm>
using namespace std;

class Profile {
    public:
        string n;
        int h, w;
        Profile(string name, int height, int weight) {
            this->n = name;
            this->h = height;
            this->w = weight;
        }

    Profile() {}
};

bool cmp(Profile a, Profile b) {
    if (a.h == b.h) {
        return a.w > b.w;
    }
    return a.h < b.h;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    Profile profiles[n];

    for (int i = 0; i < n; i++) {
        string a;
        int b, c;
        cin >> a >> b >> c;
        profiles[i] = Profile(a, b, c);
    }

    sort(profiles, profiles + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << profiles[i].n << " " << profiles[i].h << " " << profiles[i].w << endl;
    }
    return 0;
}