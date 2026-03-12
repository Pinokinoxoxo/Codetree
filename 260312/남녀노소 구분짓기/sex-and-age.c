#include <stdio.h>

int main() {
    // Please write your code here.
    int sex, age;
    scanf("%d\n%d", &sex, &age);
    if (sex == 0) {
        if (age >= 19) {
            printf("MAN");
        } else printf("BOY");
    }
    else {
        if (age >= 19) {
            printf("WOMAN");
        } else printf("GIRL");
    }
    return 0;
}