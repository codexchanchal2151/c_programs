#include <stdio.h>

int main() {
    int total_days, years, weeks, days;

    printf("Enter total days: ");
    scanf("%d", &total_days);

    years = total_days / 365;
    weeks = (total_days % 365) / 7;
    days = (total_days % 365) % 7;

    printf("%d days = %d year(s), %d week(s), and %d day(s)\n", total_days, years, weeks, days);

    return 0;
}
