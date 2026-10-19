#include <stdio.h>

int main() {
    int n, i, sum = 0, expected_sum = 0;
    
    printf("Enter the value of N (range 1 to N): ");
    scanf("%d", &n);

    int arr[n - 1];
    printf("Enter %d elements (from 1 to %d with one number missing):\n", n - 1, n);
    for(i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Formula to find sum of first N natural numbers: n * (n + 1) / 2
    expected_sum = (n * (n + 1)) / 2;

    int missing_number = expected_sum - sum;
    printf("The missing number is: %d\n", missing_number);

    return 0;
}
