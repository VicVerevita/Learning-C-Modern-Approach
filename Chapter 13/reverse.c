#include <stdio.h>

#define MAX_LEN 20

int main(int argc, char *argv[]) {
    for (int i = argc - 1; i >= 1; i--) {
        printf("%s ", argv[i]);
    }

    return 0;
}
