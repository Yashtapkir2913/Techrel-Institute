#include<stdio.h>
int main(){

    int a,b,c;
    printf("Enter three Numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    
    if(a>b)
    b=a;

    if(c>b)
    b=c;

    printf("Maximum is: %d", b);
}