#include <stdio.h>
int main()
{
    int a[100], n, i, sum=0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
        
    for (i = 0; i < n; i++)
    sum= sum+a[i];
        printf("Sum is: %d", sum);
    return 0;
}