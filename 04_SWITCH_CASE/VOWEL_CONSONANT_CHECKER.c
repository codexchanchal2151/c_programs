#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter an alphabet character: ");
    scanf(" %c", &ch);

    // Convert to lowercase for easier checking
    ch = tolower(ch);

    if (!isalpha(ch)) {
        printf("Error: '%c' is not a valid alphabet letter.\n", ch);
        return 0;
    }

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("'%c' is a Vowel.\n", ch);
            break;
        default:
            printf("'%c' is a Consonant.\n", ch);
    }

    return 0;
}
