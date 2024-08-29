#include <stdio.h>

int binarySearch(int arr[], int low, int high, int x) {
    int mid;
    while (low <= high) {
        mid = (low + high) / 2;

        if (x == arr[mid]) {
            return mid;  
        } else if (x > arr[mid]) {
            low = mid + 1;  
        } else {
            high = mid - 1;  
        }
    }
    return -1; 
}

int main(void) {
    int x;
    int arr[10] = {0, 2, 2, 4, 5, 5, 6, 7, 7, 10};
    printf("Enter a value to search: ");
    scanf("%d", &x);
    
    int result = binarySearch(arr, 0, 9, x);
    if (result == -1) {
        printf("Element is not present in array\n");
    } else {
        printf("Element is present in array at index: %d\n", result);
    }

    return 0;
}
