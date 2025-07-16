#include <stdio.h>

#define MAX 100

// Function to read array elements
void read(int arr[], int *n) {
    printf("Enter the number of elements: ");
    scanf("%d", n);

    printf("Enter %d elements:\n", *n);
    for (int i = 0; i < *n; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to display array elements
void display(int arr[], int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to sort array in ascending order
void sort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array sorted in ascending order.\n");
}

// Main function
int main() {
    int arr[MAX], n;

    read(arr, &n);
    printf("\nBefore Sorting:\n");
    display(arr, n);

    sort(arr, n);
    printf("\nAfter Sorting:\n");
    display(arr, n);

    return 0;
}
