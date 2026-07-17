#include <iostream>
#include <algorithm>
using namespace std;

class Seq {
    public:
        int a, n;
        Seq(int a, int num) {
            this->a = a;
            this->n = num;
        }
    Seq() {}
};

bool cmp(Seq a, Seq b) {
    if (a.a != b.a) return a.a < b.a;

    return a.n < b.n;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    Seq sequen[n];

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        sequen[i] = Seq(a, i + 1);
    }

    sort(sequen, sequen + n, cmp);
    int ans[1005];

    for (int i = 0; i < n; i++) {
        ans[sequen[i].n] = i + 1;
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }


    return 0;
}