#include <stdio.h>

int main() {
    int daysLate;
    
    printf("--- Library Fine Calculator ---\n");
    printf("Enter number of days the book is late: ");
    scanf("%d", &daysLate);
    
    switch(daysLate) {
        case 0:
            printf("No fine! Thank you for returning on time.\n");
            break;
        case 1: case 2: case 3: case 4: case 5:
            printf("Fine is Rs. 2 per day. Total Fine: Rs. %d\n", daysLate * 2);
            break;
        case 6: case 7: case 8: case 9: case 10:
            printf("Fine is Rs. 5 per day. Total Fine: Rs. %d\n", daysLate * 5);
            break;
        default:
            if(daysLate > 10) {
                printf("Fine is Rs. 10 per day. Total Fine: Rs. %d\n", daysLate * 10);
            } else {
                printf("Invalid input!\n");
            }
    }
    
    return 0;
}
