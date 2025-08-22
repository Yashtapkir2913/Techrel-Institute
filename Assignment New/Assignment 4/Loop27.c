#include <stdio.h>
int main()
{
    int rev = 0, n, temp;
    printf("Enter a Number: ");
    scanf("%d", &n);
    temp=n; //This is backup for previous number as it will beome zero when it enters while loop

    while (n > 0)
    {
        int rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }
    if(rev==temp)
    printf("Palindrome");
    else
    printf("Not Palindrome");
    return 0;
}