#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char word1[20];
    char word2[20];
    scanf("%s %s", word1, word2);

    int len1 = strlen(word1);
    int len2 = strlen(word2);

    if (len1 > len2) {
        printf("%s %d", word1, len1);
    }
    else if (len1 < len2) {
        printf("%s %d", word2, len2);
    }
    else printf("same");

    return 0;
}