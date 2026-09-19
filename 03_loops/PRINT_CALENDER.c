#include <stdio.h>
int main()
{
    int month, year, days, i;

    printf("Enter month (1-12): ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    if (month == 2)
    {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            days = 29;
        else
            days = 28;
    }

    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        days = 30;
    }

    else
    {
        days = 31;
    }

    printf("\nSun Mon Tue Wed Thu Fri Sat\n");
    for (i = 1; i <= days; i++)
    {
        printf("%3d ", i);
        
        if (i % 7 == 0)
            printf("\n");
    }

    return 0;
}
