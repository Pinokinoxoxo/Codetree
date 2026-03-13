#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char string[101];

    scanf("%s", string);

    int len = strlen(string);

    string[1] = 'a';
    string[len - 2] = 'a';

    printf("%s", string);
    
    return 0;
}