#include <stdio.h>

int main() {
    int n, i, j = 0;
    
    // Array ka size input lena
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n], temp[n];
    
    // Elements input lena
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Non-zero elements ko pehle store karna
    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            temp[j++] = arr[i];
        }
    }
    
    // Baaki bache hue positions par zero (0) fill karna
    while(j < n) {
        temp[j++] = 0;
    }
    
    // Modified array ko original array me copy karna (optional)
    for(i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    
    // Output print karna
    printf("\nArray after moving zeroes to the end:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
