#include <stdio.h>
int main()
{
    int a[100], n, i, key, count=0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
        printf("Enter a element for occurance ");
        scanf("%d", &key);
        for(i=0; i<n; i++)
        {
            if(a[i]==key)
            count++;
        }
        if(count==0)
        printf("Not Found");
        else
        printf("Frequency is %d", count);

}
// Frequency