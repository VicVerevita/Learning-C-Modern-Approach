#include <stdio.h>

int main(void) {
    int total, bill_20, bill_10, bill_5, bill_1;
    printf("Enter the dollar total: ");
    scanf("%d", &total);
    total = 93;
    bill_20 = total/20;
    total = total%20;
    bill_10 = total/10;
    total = total%10;
    bill_5 = total/5;
    total = total%5;
    bill_1 = total;

    printf("$20 bills: %d\n", bill_20);
    printf("$10 bills: %d\n", bill_10);
    printf("$5 bills: %d\n", bill_5);
    printf("$1 bills: %d\n", bill_1);
}
