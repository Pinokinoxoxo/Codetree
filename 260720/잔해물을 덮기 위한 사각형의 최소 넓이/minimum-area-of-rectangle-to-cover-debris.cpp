#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int x1, x2, y1, y2, x3, x4, y3, y4;
    int arr[2005][2005] = {0};

    cin >> x1 >> y1 >> x2 >> y2;
    for (int i = 1000 + x1; i < 1000 + x2; i++) {
        for (int j = 1000 + y1; j < 1000 + y2; j++) {
            arr[i][j]++;
        }
    }

    cin >> x3 >> y3 >> x4 >> y4;
    for (int i = 1000 + x3; i < 1000 + x4; i++) {
        for (int j = 1000 + y3; j < 1000 + y4; j++) {
            arr[i][j] = 0;
        }
    }

    int min_x = 2005, max_x = 0;
    int min_y = 2005, max_y = 0;

    for (int i = 0; i < 2005; i++) {
        for (int j = 0; j < 2005; j++) {
            if (arr[i][j] == 1) { 
                min_x = min(min_x, i);
                max_x = max(max_x, i);
                min_y = min(min_y, j);
                max_y = max(max_y, j);
            }
        }
    }

    // 4. 결과 출력
    // min_x가 초기값 2005 그대로라면 잔해가 하나도 없었다는 뜻
    if (min_x == 2005) {
        cout << 0;
    } else {
        int area = (max_x - min_x + 1) * (max_y - min_y + 1);
        cout << area;
    }


    return 0;
}