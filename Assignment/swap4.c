#include<stdio.h>
void main()
{
  int a, b;
    printf("Enter two integers\n");
    scanf("%d%d",&a, &b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("a=%d, b=%d\n", a, b);

}