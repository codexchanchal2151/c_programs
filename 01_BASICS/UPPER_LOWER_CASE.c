#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an Uppercase alphabet.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a Lowercase alphabet.\n", ch);
    } else {
        printf("Not a valid alphabet character.\n");
    }

    return 0;
}
