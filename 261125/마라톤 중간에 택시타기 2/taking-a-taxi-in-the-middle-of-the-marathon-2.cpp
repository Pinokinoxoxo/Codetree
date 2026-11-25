#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int n;
int x[100];
int y[100];

int dis_min = INT_MAX;

int distance(int x1, int y1, int x2, int y2) {
    return (abs(x1 - x2) + abs(y1 - y2));
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    for (int j = 1; j < n - 1; j++) {
        int dis_diff = 0;

        int orix = x[j], oriy = y[j];
        //하나 빼기
        for (int k = j; k < n - 1; k++) {
            x[j] = x[j + 1];
            y[j] = y[j + 1];
        }
        //거리 계산하기
        for (int l = 0; l < n - 1; l++) {
            dis_diff += distance(x[l], y[l], x[l + 1], y[l + 1]);
        }
        // 비교하기
        dis_min = min(dis_min, dis_diff);

        //다시 집어넣기
        for (int k = j; k < n - 1; k++) {
            x[j + 1] = x[j];
            y[j + 1] = y[j];
        }
        x[j] = orix;
        y[j] = oriy;
    }

    cout << dis_min;

    return 0;
}