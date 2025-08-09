#include<stdio.h> 

int main() { 
    int ch; 
    float r; 
    printf("Enter the radius: ");
    scanf("%f", &r); 

    printf("\n1.Area Of Circle\n2.Circumference Of Circle\n3.Volume Of Sphere\n\n"); 
    printf("Enter your choice: "); 
    scanf("%d",&ch); 

    switch (ch) { 
        case 1: 
            printf("Area Of Circle is %f\n", (3.14*r*r)); 
            break; 
        case 2: 
            printf("Circumference Of Circle is %f\n", (2*3.14*r)); 
            break; 
        case 3: 
            printf("Volume Of Sphere is %f\n", (4.0/3.0*3.14*r*r*r));
            printf("Invalid choice.\n");
            break;
    } 
    return 0; 
}