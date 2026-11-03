#include <stdio.h>

int main() {
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 12:
        case 1:
        case 2:
            printf("Winter Season\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("Spring / Summer Season\n");
            break;
        case 6:
        case 7:
        case 8:
        case 9:
            printf("Monsoon / Rainy Season\n");
            break;
        case 10:
        case 11:
            printf("Autumn Season\n");
            break;
        default:
            printf("Invalid month number! Please enter a value between 1 and 12.\n");
    }

    return 0;
}
