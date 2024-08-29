#include <stdio.h>

int binarySearch(int arr[], int low, int high, int x) {
    if (low > high) {
        return -1;
    }

    int mid = low + (high - low) / 2; 

    if (x > arr[mid]) {
        return binarySearch(arr, mid + 1, high, x);
    } else if (x < arr[mid]) {
        return binarySearch(arr, low, mid - 1, x);
    } else {
        return mid; 
    }
}

int main(void) {
    int x;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
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
