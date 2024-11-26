#include <ctype.h>
#include <stdio.h>

#define N 100

int main(void) {
    char a[N], *start = a, *end;

    char ch;
    while ((ch = getchar()) != '\n' && start < a + N - 1) {
        if (isalpha(ch)) {
            *start++ = tolower(ch);
        }
    }
    *start = '\0';

    start = a;
    end = a + (start - a) -1;

    int is_palindrome = 1;

    while (start < end) {
        if (*start != *end) {
            is_palindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (is_palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}
