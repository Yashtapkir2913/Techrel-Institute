#include <stdio.h>

int main() {

    int i, n, sum=0,x;
    printf("Enter number 1: ");
    scanf("%d", &x);

    printf("Enter number 2: ");
    scanf("%d", &n);

    for (i = x; i <= n; i++) 
    sum = sum+i;
    printf("Sum is %d", sum);

    return 0;
}
