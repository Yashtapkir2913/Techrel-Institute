#include <stdio.h>
int main()
{

    int c = 0, n;

    printf("Enter a Number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        c++;
        n = n / 10;
    }
    printf("Number of Digits are: %d", c);
}