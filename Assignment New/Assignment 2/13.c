#include <stdio.h>
int main()
{
    int h, s, m;

    printf("Enter Hours: ");
    scanf("%d", &h);
    printf("Enter Mins: ");
    scanf("%d", &m);
    printf("Enter Sec: ");
    scanf("%d", &s);

    if (h >= 0 && h < 24)
    {
        if (m >= 0 && m < 60)
        {
            if (s >= 0 && s < 60)
            {
                printf("Time is Valid");
            }
            else
            {
                printf("Time is Invalid");
            }
        }
        else
        {
            printf("Time is Invalid");
        }
    }
    else
    {
        printf("Time is Invalid");
    }
    return 0;
}