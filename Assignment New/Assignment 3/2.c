#include<stdio.h>
int main(){

    int ch,a,b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Enter your choice\n\n");
    scanf("%d",&ch);

    switch (ch)
    {
        case 1: printf("Addition is %d",(a+b));
        break;
        case 2: printf("Substraction is %d",(a-b));
        break;
        case 3: printf("Multiplication is %d",(a*b));
        break;
        case 4: printf("Division is %d",(a/b));
        break;
        case 5: printf("Enter Your Choice:\n ");
        break;
    }
return 0;
}

    
