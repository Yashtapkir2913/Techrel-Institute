#include<stdio.h>
int main()
{
int i, a;

printf("Enter a number: ");
scanf("%d", &a);

for(i=1; i<=a; i++)
printf("%d  Hello World....\n",i);

return 0;
}