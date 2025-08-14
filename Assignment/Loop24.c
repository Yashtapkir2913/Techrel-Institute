#include <stdio.h>

int main()
{
    int n, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;    // to get last digit
        sum = sum + digit; // to add to sum
        n = n / 10;        // to remove last digit
    }

    printf("Sum of digits = %d", sum);
    return 0;
}
