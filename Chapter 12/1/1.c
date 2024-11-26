#include <stdio.h>

#define N 100

int main(void) {
    int char_number = 0, a[N], *p = a;

    printf("Enter a message: ");
    do {
        p[char_number] = getchar();
    }
    while (p[char_number++] != '\n');

    for (int i = char_number; i >= 0; i--) {
        printf("%c", p[i]);
    }

    return 0;
}
