#include<stdio.h>
void main(){

    int u, a, t, v, s;
    printf("\nEnter the initial velocity, acceleration and time:");
    scanf("%d%d%d",&u, &a, &t);

    v = u + a * t;
    s = u + (a*t*t);

    printf("Final velocity is: %d\n" ,v);
    printf("Distance travelled is: %d" ,s);

}