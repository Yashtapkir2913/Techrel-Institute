#include <stdio.h>
#include<math.h>
int main()
{
    int n, i, count = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i<=sqrt(n); i++) 
    {
        if (n % i == 0)
            count++;
    }
    if (count == 0)
        printf("Prime Number");
    else
        printf("Not Prime");
}