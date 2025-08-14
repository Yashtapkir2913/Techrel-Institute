#include <stdio.h>
int main()
{
    int n, even = 0, odd = 0, zero = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        int d = n % 10;
        if (d == 0)
            zero++;
        else if (d % 2 == 0)
            even++;
        else
            odd++;
        n /= 10;
    }
    printf("Even digits: %d\nOdd digits: %d\nZero digits: %d", even, odd, zero);
    return 0;
}
