#include <stdio.h>
int main()
{
    int a[100], n, i;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Given data is:\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}