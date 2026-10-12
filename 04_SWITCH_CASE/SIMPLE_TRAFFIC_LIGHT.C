#include <stdio.h>

int main() {
    char choice;
    printf("Enter traffic light color (R for Red, Y for Yellow, G for Green): ");
    scanf(" %c", &choice);

    switch(choice) {
        case 'R':
        case 'r':
            printf("Stop! The light is Red.\n");
            break;
        case 'Y':
        case 'y':
            printf("Get Ready! The light is Yellow.\n");
            break;
        case 'G':
        case 'g':
            printf("Go! The light is Green.\n");
            break;
        default:
            printf("Invalid color choice!\n");
    }
    return 0;
}
