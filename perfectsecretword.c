#include <stdio.h>
#include <string.h>
int main() {
    char word[100], rev[100];
    int len, i, j;
    printf("Enter the word:\n");
    scanf("%s", word);
    len = strlen(word);
    for (i = 0, j = len - 1; i < len; i++, j--)
        rev[i] = word[j];
    rev[len] = '\0';
    if (strcmp(word, rev) == 0)
        printf("Perfect secret word\n");
    else
        printf("Not a perfect secret word\n");

    return 0;
}