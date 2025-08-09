#include<stdio.h>
void main()
{
  float r, h, sa, Vol;
    printf("Enter Suface area of Cylinder\n");
    scanf("%f%f",&r, &h);

    sa = 2* 3.14*r*r*h + 2*3.14 *r*h;
    printf("The surface area of Cylinder is %f\n",sa);

    Vol = 3.13*r*r*h;
    printf("\nThe Volume of Cylinder is %f",Vol);

}