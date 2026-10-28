#include <stdio.h>

int main() {
    long long n;
    long long binary = 0, remainder, base = 1;

    printf("Enter a decimal integer: ");
    scanf("%lld", &n);

    long long temp = n;
    while (temp > 0) {
        remainder = temp % 2;
        binary = binary + remainder * base;
        temp /= 2;
        base *= 10;
    }

    printf("Binary of %lld is %lld\n", n, binary);
    
    return 0;
}
