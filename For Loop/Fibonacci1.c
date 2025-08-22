#include<stdio.h>
#include<unistd.h> 

int main(){
    int i, a=0, b=1, c, n;
    printf("Enter Number: ");
    scanf("%d",&n);

    if(n==1) {
        printf("%d\n", a);
        sleep(5); // Delay after printing the first term
    } else if(n>=2) {
        printf("%d\n%d\n", a,b);
        sleep(5); // Delay after printing the first two terms

        for(i=2;i<n;i++) {
            c=a+b;
            printf("%d\n", c);
            a=b;
            b=c;
            sleep(5); // Delay after printing each subsequent term
        }
    }
    return 0; // It's good practice to return 0 from main
}