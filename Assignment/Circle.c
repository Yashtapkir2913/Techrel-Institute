#include<stdio.h>
void main()
{
  float r, a, cf;
    printf("Enter Radius of Circle\n");
    scanf("%f",&r);

    a=3.14*r*r;
    printf("The area of Circle is %f",a);

    cf=2*3.14*r;
    printf("\nThe Circumference of Circle is %f",cf);
}