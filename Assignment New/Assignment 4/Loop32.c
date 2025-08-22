#include <stdio.h>
int main()
{
    int n, count = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factors: ");
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            sum += i;
            count++;
        }
    }
    printf("\nCount = %d\nSum = %d", count, sum);
    return 0;
}
