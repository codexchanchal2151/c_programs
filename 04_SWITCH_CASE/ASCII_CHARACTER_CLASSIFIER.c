#include <stdio.h>

int main() {
    char ch;
    int category;

    printf("Enter any single character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        category = 1;
    } else if (ch >= 'a' && ch <= 'z') {
        category = 2;
    } else if (ch >= '0' && ch <= '9') {
        category = 3;
    } else {
        category = 4;
    }

    switch (category) {
        case 1:
            printf("'%c' is an UPPERCASE letter.\n", ch);
            printf("ASCII Value: %d\n", ch);
            printf("Lowercase equivalent: '%c'\n", ch + 32);
            break;

        case 2:
            printf("'%c' is a LOWERCASE letter.\n", ch);
            printf("ASCII Value: %d\n", ch);
            printf("Uppercase equivalent: '%c'\n", ch - 32);
            break;

        case 3:
            printf("'%c' is a DIGIT (0-9).\n", ch);
            printf("ASCII Value: %d\n", ch);
            break;

        case 4:
            printf("'%c' is a SPECIAL SYMBOL or whitespace.\n", ch);
            printf("ASCII Value: %d\n", ch);
            break;

        default:
            printf("Invalid input.\n");
            break;
    }

    return 0;
}
