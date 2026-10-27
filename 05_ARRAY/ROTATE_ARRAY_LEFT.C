#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Store the first element
    int first = arr[0];
    
    // Shift elements to the left
    for(i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Move the first element to the last position
    arr[n - 1] = first;
    
    printf("Array after left rotation by 1 position:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
