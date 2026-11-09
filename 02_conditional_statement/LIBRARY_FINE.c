#include <stdio.h>

int main() {
    int daysLate;
    float fine = 0.0;

    printf("Enter number of days the book is late: ");
    scanf("%d", &daysLate);

    if (daysLate <= 0) {
        printf("No fine. Thank you for returning on time!\n");
    } else if (daysLate <= 5) {
        fine = daysLate * 1.0;
        printf("Fine: ₹%.2f\n", fine);
    } else if (daysLate <= 10) {
        fine = (5 * 1.0) + ((daysLate - 5) * 2.0);
        printf("Fine: ₹%.2f\n", fine);
    } else if (daysLate <= 30) {
        fine = (5 * 1.0) + (5 * 2.0) + ((daysLate - 10) * 5.0);
        printf("Fine: ₹%.2f\n", fine);
    } else {
        printf("Membership cancelled due to excessive delay (> 30 days). Fine is ₹500.\n");
    }

    return 0;
}
