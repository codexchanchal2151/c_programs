#include <stdio.h>

int main() {
    int days;
    printf("Enter number of late days: ");
    scanf("%d", &days);

    // Using switch case with ranges grouped or categorized by intervals
    int category = (days <= 0) ? 0 : (days <= 5) ? 1 : (days <= 10) ? 2 : 3;

    switch (category) {
        printf("\n");
        case 0:
            printf("No fine. Thank you for returning on time!\n");
            break;
        case 1:
            printf("Fine: Rs. %d (Rate is Rs. 2 per day for first 5 days)\n", days * 2);
            break;
        case 2:
            printf("Fine: Rs. %d (Rate is Rs. 5 per day for 6-10 days)\n", (5 * 2) + ((days - 5) * 5));
            break;
        case 3:
            printf("Fine: Rs. %d (Rate is Rs. 10 per day beyond 10 days)\n", (5 * 2) + (5 * 5) + ((days - 10) * 10));
            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
}
