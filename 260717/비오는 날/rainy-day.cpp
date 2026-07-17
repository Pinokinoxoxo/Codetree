#include <iostream>
#include <algorithm>
using namespace std;

class Wether {
    public:
        string d, week, w;

    Wether(string day, string week, string wether) {
        this->d = day;
        this->week = week;
        this->w = wether;
    }

    Wether() {}
};

bool cmp(Wether a, Wether b) {
    return a.d < b.d;
}
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    Wether wethers[n];
    
    for (int i = 0; i < n; i++) {
        string a, b, c;
        cin >> a >> b >> c;
        wethers[i] = Wether(a, b, c);
    }

    sort(wethers, wethers + n, cmp);

    for (int i = 0; i < n; i++) {
        if (wethers[i].w == "Rain") {
            cout << wethers[i].d << " " << wethers[i].week << " " << wethers[i].w;
            break;
        }
    }

    return 0;
}