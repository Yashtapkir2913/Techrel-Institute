#include <stdio.h>
int main()
{
    int n, i, count = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) // use i=2; i<=n/2; i++
    {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        printf("Prime Number");
    else
        printf("Not Prime");
}