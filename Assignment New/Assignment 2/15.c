#include<stdio.h>
int main(){

    float bs, da, hra, tax, totalsalary;
    int eid;
    char name[100];
    FILE *fp;
    
    fp = fopen("EmployeeSalary.txt", "w");

    printf("Enter Employees Details: ");
    printf("\nID: ");
    scanf("%d", &eid);
    printf("Name: ");
    gets(name); // so that here enter of new line is stored
    gets(name); // here name along with space in between is stored
    //scanf("%s", &name); // Only using scanf will not store name with space in between it
    printf("Basic Salary: ");
    scanf("%f", &bs);
    printf("DA (%%): ");
    scanf("%f", &da);
    printf("HRA (%%): ");
    scanf("%f", &hra);

    if(bs>=100000)
    tax = 20;
    else if (bs>=80000)
    tax = 15;
    else if (bs>=50000)
    tax = 10;
    else if (bs>=30000)
    tax = 5;
    else
    tax = 1;

    totalsalary = bs +((bs *(hra+da-tax))/100);

    fprintf(fp,"\nID           : %d", eid);
    fprintf(fp,"\nName         : %s", name);
    fprintf(fp,"\nBasic Salary : %.2f", bs);
    fprintf(fp,"\nHRA          : %.2f", hra);
    fprintf(fp,"\nDA           : %.2f", da);
    fprintf(fp,"\nTax          : %.2f", tax);
    fprintf(fp,"\nTotal Salary : %.2f", totalsalary);

}