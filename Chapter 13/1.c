#include <stdio.h>
#include <string.h>

#define MAX_LEN 21

int main(void) {
    char word[MAX_LEN], *p;

    printf("Enter word: ");
    scanf("%s", word);

    char min[MAX_LEN], max[MAX_LEN];
    strcpy(min, word);
    strcpy(max, word);

    for(;;) {
        printf("Enter word: ");
        scanf("%s", word);

        if (strcmp(min, word) > 0) {
            strcpy(min, word);
        } else if (strcmp(max, word) < 0) {
            strcpy(max, word);
        }

        if (strlen(word) == 4) {
            break;
        }
        memset(word, '\0', sizeof(word));
    }

    printf("Smallest word: %s\n", min);
    printf("Largest word: %s\n", max);
}
