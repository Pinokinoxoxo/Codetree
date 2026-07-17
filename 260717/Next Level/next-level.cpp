#include <iostream>
using namespace std;

class IDlevel {
    public:
        string id;
        int l;

        IDlevel (string ID = "codetree", int level = 10) {
            this->id = ID;
            this->l = level;
        }
};

int main() {
    // Please write your code here.
    string a;
    int b;
    cin >> a >> b;

    IDlevel IDlevel1 = IDlevel();
    IDlevel IDlevel2 = IDlevel(a, b);

    cout << "user " << IDlevel1.id << " lv " << IDlevel1.l << endl;
    cout << "user " << IDlevel2.id << " lv " << IDlevel2.l << endl;

    return 0;
}