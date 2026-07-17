#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

class Point {
    public:
        int x, y, n;

        Point(int x, int y, int num) {
            this->x = x;
            this->y = y;
            this->n = num;
        }

    Point() {}
};
 
bool cmp(Point a, Point b) {
    int A = abs(a.x) + abs(a.y);
    int B = abs(b.x) + abs(b.y);

    if (A == B) {
        return a.n < b.n;
    }
    return A < B;

}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    Point points[n];

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        points[i] = Point(a, b, i + 1);
    }

    sort(points, points + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << points[i].n << endl;
    }



    return 0;
}