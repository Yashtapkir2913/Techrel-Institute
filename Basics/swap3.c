#include<stdio.h>
void main()
{
  int a, b, c;
    printf("Enter two integers\n");
    scanf("%d%d",&a, &b);
    c=a;
    a=b;
    b=c;
    // other method is: (a+b)-(b=a)
    printf("a=%d, b=%d\n", a, b);

}