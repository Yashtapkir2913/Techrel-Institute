#include <stdio.h>

int main() {
    int amount, tens, fives, ones;

    // Input amount
    printf("Enter the amount to withdraw: ");
    scanf("%d", &amount);

    // Calculate notes
    tens = amount / 10;
    amount = amount % 10;

    fives = amount / 5;
    amount = amount % 5;

    ones = amount; // remaining are 1-rupee notes

    // Output result
    printf("10 Rs notes: %d\n", tens);
    printf("5 Rs notes : %d\n", fives);
    printf("1 Rs notes : %d\n", ones);

    return 0;
}
