#include <stdio.h>
int main()
{
    int a[100], n, i, key, flag = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter Element: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        printf("Found");
    else
        printf("Not Found");
    return 0;
}
// Linear Search