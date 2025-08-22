#include<stdio.h>
void main(){

    float F, C, K;
    printf("\nEnter the temperature in Faranheit:");
    scanf("%f",&F);

    C= (5.0/9.0)*(F-32);
    K= C+273.15;

    printf("Temperature in degree Celcius is: %f\n" ,C);
    printf("Temperature in degree Kelvin is: %f" ,K);

}