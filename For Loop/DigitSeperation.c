#include <stdio.h>
int main()
{

    int c = 0, n, rem, rev;

    printf("Enter a Number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        int rem = n % 10;

        printf("%d ", rem);

        n = n / 10;
    }
}