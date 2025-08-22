#include <stdio.h>
#include <math.h>

int main()
{
    int result = 0, n, temp, count = 0;

    printf("Enter a Number: ");
    scanf("%d", &n);

    temp = n;

    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    
    n = temp;

    while (n > 0)
    {
        int rem = n % 10;
        result = result + pow(rem, count);
        n = n / 10;
    }
    if (temp == result)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}