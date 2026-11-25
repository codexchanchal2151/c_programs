#include <stdio.h>

int main(void) {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    // Remove trailing newline character if present
    while (str[length] != '\0') {
        if (str[length] == '\n') {
            str[length] = '\0';
            break;
        }
        length++;
    }

    // Calculate string length
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    printf("String: %s\n", str);
    printf("Length: %d\n", len);

    // Reverse the string in-place
    int start = 0;
    int end = len - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
