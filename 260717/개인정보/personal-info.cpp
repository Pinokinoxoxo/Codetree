#include <iostream>
#include <algorithm>
using namespace std;

class Profile {
    public:
        string n;
        int h;
        double w;

        Profile(string name, int height, double weight) {
            this->n = name;
            this->h = height;
            this->w = weight;
        }

    Profile() {}
};

bool cmp1(Profile a, Profile b) {
    return a.n < b.n;
}

bool cmp2(Profile a, Profile b) {
    return a.h > b.h;
}

int main() {
    // Please write your code here.
    Profile profiles[5];

    for (int i = 0; i < 5; i++) {
        string a;
        int b;
        double c;
        cin >> a >> b >> c;
        profiles[i] = Profile(a, b, c);
    }

    sort(profiles, profiles + 5, cmp1);
    cout << fixed;
    cout.precision(1);
    cout << "name" << endl;
    for (int i = 0; i < 5; i++) {
        cout << profiles[i].n << " " << profiles[i].h << " " << profiles[i].w << endl;
    }
    cout << endl;
    sort(profiles, profiles + 5, cmp2);

    cout << "height" << endl;

    for (int i = 0; i < 5; i++) {
        cout << profiles[i].n << " " << profiles[i].h << " " << profiles[i].w << endl;
    }


    return 0;
}