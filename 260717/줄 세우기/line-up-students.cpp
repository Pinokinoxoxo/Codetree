#include <iostream>
#include <algorithm>
using namespace std;

class Profile {
    public:
        int h, w, n;

        Profile(int hight, int weight, int num) {
            this->h = hight;
            this->w = weight;
            this->n = num;
        }
    Profile() {}
};

bool cmp(Profile a, Profile b) {
    if (a.h == b.h) {
        if (a.w == b.w) {
            return a.n < b.n;
        }
        return a.w > b.w;
    }
    return a.h > b.h;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    Profile profiles[n];

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        profiles[i] = Profile(a, b, i + 1);
    }

    sort(profiles, profiles + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << profiles[i].h << " " << profiles[i].w << " " << profiles[i].n << endl;
    }


    return 0;
}