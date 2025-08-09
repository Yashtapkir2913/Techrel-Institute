#include <stdio.h>
int main() {
    
    int emp_id;
    float basic, hra, da, ptax, take_home;

    printf("Enter Employee ID and Basic Salary: ");
    scanf("%d%f", &emp_id, &basic);

    hra = 0.10 * basic;
    da = 0.30 * basic;
    ptax = 0.05 * basic;
    take_home = basic + hra + da - ptax;

    printf("Employee ID: %d\nTake Home Salary = %f\n", emp_id, take_home);
    return 0;
}
