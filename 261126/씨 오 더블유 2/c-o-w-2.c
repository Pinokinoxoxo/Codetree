#include <stdio.h>

int n;
char str[105];

int main() {
    scanf("%d", &n);
    scanf("%s", str);
    // Please write your code here.

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                    if (str[i] == 'C' && str[j] == 'O' && str[k] == 'W') {
                        cnt++;
                    }
            }
        }
    }

    printf("%d", cnt);


    return 0;
}