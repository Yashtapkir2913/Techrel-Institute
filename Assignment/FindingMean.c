#include<stdio.h>
int main()
{
  float a, b, am, hm;
    printf("Enter two numbers: \n");
    scanf("%f%f",&a, &b);

    am = (a+b)/2;
    hm = (a*b)/(a+b);

    printf("Arithmetic Mean is: %f\n" ,am);
    printf("Harmonic Mean is: %f" ,hm);

}