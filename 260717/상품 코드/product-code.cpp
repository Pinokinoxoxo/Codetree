#include <iostream>
using namespace std;

class Product {
    public:
        string n;
        int c;

        Product(string name = "codetree", int code = 50) {
            this->n = name;
            this->c = code;
        }
};

int main() {
    // Please write your code here.
    string a;
    int b;
    cin >> a >> b;

    Product product1 = Product();

    cout << "product " << product1.c << " is " << product1.n << endl;

    product1.n = a;
    product1.c = b;

    cout << "product " << product1.c << " is " << product1.n << endl;
    
    return 0;
}