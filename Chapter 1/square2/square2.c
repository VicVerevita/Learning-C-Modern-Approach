#include <stdio.h>

int main(void) {
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter the number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i%24 == 1) {
            printf("Press Enter to continue...");
            if(getchar() == '\n') {
                continue;
            }
        }
        printf("%10d%10d\n", i, i * i);
    }

    return 0;
}
