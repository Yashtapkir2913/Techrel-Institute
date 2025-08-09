#include <stdio.h>
void main() {
    int p_id1, p_id2, p_id3;
    char name1[100], name2[100], name3[100],qty1, qty2, qty3;
    float price1, price2, price3,total, discount, discount_amt, final_amt;
    
    printf("Enter Product 1 ID: ");  // Product 1
    scanf("%d", &p_id1);
    printf("Enter Product 1 Name: ");
    gets(name1);
    gets(name1);
    printf("Enter Quantity: ");
    scanf("%d", &qty1);
    printf("Enter Price: ");
    scanf("%f", &price1);
  
    printf("\nEnter Product 2 ID: ");// Product 2
    scanf("%d", &p_id2);
    printf("Enter Product 2 Name: ");
    gets(name2);
    gets(name2);
    printf("Enter Quantity: ");
    scanf("%d", &qty2);
    printf("Enter Price: ");
    scanf("%f", &price2);
 
    printf("\nEnter Product 3 ID: ");// Product 3
    scanf("%d", &p_id3);
    printf("Enter Product 3 Name: ");
    gets(name3);
    gets(name3);
    printf("Enter Quantity: ");
    scanf("%d", &qty3);
    printf("Enter Price: ");
    scanf("%f", &price3);

    total = (qty1 * price1) + (qty2 * price2) + (qty3 * price3);

    if (total >= 100000)
        discount = 20;
    else if (total >= 80000)
        discount = 15;
    else if (total >= 50000)
        discount = 10;
    else if (total >= 30000)
        discount = 5;
    else
        discount = 0;

    discount_amt = (discount / 100) * total;

    final_amt = total - discount_amt;

    printf("\nFinal Bill\n");
    printf("Total Amount   : %.1f\n", total);
    printf("Discount (%.1f%%) : %.1f\n", discount, discount_amt);
    printf("Final Amount   : %.1f\n", final_amt);
}
