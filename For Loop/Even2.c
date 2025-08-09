
#include <stdio.h>

int main() {

    int i, n,x;
    printf("Enter number 1: ");
    scanf("%d", &x);

    printf("Enter number 2: ");
    scanf("%d", &n);

    x =(x%2==0)? x: x+1;// for odd change position of x  to x+1 and x+1 to x
    for (i = x; i <= n; i+=2) 
    
    printf("Even Nos are: %d\n",i);

    return 0;
}
