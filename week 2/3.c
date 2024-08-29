#include <stdio.h>

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int arr3[]) {
    int i = 0;

    while (i < n1) {
        arr3[i] = arr1[i];
        i++;
    }

    int j = 0;
    while (j < n2) {
        arr3[i] = arr2[j];
        i++;
        j++;
    }
}

int main() {
    int n1, n2, i;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];

    printf("Enter %d elements for the first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2], arr3[n1+n2];

    printf("Enter %d elements for the second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    mergeArrays(arr1, n1, arr2, n2, arr3);

    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}

