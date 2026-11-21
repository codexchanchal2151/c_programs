#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int current_sum = arr[0];
    int max_sum = arr[0];

    for (int i = 1; i < n; i++) {
        // Ya toh purane subarray mein arr[i] jodo, ya arr[i] se naya subarray shuru karo
        if (current_sum + arr[i] > arr[i]) {
            current_sum = current_sum + arr[i];
        } else {
            current_sum = arr[i];
        }

        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("Maximum contiguous subarray sum = %d\n", max_sum);
    return 0;
}
