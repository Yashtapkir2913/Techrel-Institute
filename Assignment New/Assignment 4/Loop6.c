#include <stdio.h>

int main()
{
    int x, y, i;

    printf("Enter the starting number: ");
    scanf("%d", &x);

    printf("Enter the ending number: ");
    scanf("%d", &y);

    for(i=x; i<=y; i++) // if exclusive then modify as:-  for(i=x+1; i<=y-1; i++)
        printf("%d\n", i);
    return 0;
}
