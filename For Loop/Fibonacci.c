#include<stdio.h>
int main(){

    int i, a=0, b=1, c, n;
    printf("Enter Number: ");
    scanf("%d",&n);

    if(n==1){
    printf("%d\n", a);
      }
    else if(n>=2)
    {
        printf("%d\n%d\n", a,b);
       
        for(i=2;i<n;i++)
        {
            c=a+b;
            printf("%d\n", c);
            a=b;
            b=c;
            
        }
    }

}
