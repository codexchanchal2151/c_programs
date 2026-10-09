#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr1[n], arr2[n];
    printf("Enter %d elements for first array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    
    // Copying elements
    for(i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }
    
    printf("Elements of the second (copied) array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}
