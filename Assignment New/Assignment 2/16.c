#include<stdio.h>
int main(){

    int Stu_id;
    char name[100];
    float Sub1, Sub2, Sub3, Total, Avg;

    printf("Enter Student ID: ");
    scanf("%d", &Stu_id);

    printf("Enter Student Name: ");
    gets(name);
    gets(name);

    printf("\nEnter Subject Marks: \n");

    printf("\nSubject 1 Name: ");
    gets(name);
    printf("Enter Subject 1 Marks: ");
    scanf("%f",&Sub1);

    printf("Subject 2 Name: ");
    gets(name);
    gets(name);
    printf("Enter Subject 2 Marks: ");
    scanf("%f",&Sub2);

    printf("Subject 3 Name: ");
    gets(name);
    gets(name);
    printf("Enter Subject 3 Marks: ");
    scanf("%f",&Sub3);

    Total = (Sub1+Sub2+Sub3);
    Avg = (Sub1+Sub2+Sub3)/3;

    printf("\nTotal is %.2f\n",Total);
    printf("\nAvg is %.2f\n",Avg);

    if (Avg >= 90)
        printf("\nGrade: O\n");
    else if (Avg >= 80)
        printf("\nGrade: A\n");
    else if (Avg >= 70)
        printf("\nGrade: B\n");
    else if (Avg >= 60)
        printf("\nGrade: C\n");
    else if (Avg >= 50)
        printf("\nGrade: D\n");
    else
        printf("\nGrade: F (Fail)\n");
    
}