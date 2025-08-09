#include<stdio.h>
int main(){
    int a;
    printf("Enter an amount: ");
    scanf("%d", &a);

    printf("10*%d\n", a/10);
    a = a%10;

    printf("5*%d\n", a/5);
    a = a%5;

    printf("1*%d", a);

    return 0;
}