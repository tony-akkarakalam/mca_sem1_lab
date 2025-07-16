#include <stdio.h>

int main() {
    int arr[100], n, key, found = 0;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input key to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Search for all occurrences
    printf("Element %d found at positions: ", key);
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("%d ", i);  // printing position (index)
            found = 1;
        }
    }

    if (!found) {
        printf("\nElement not found in the array.");
    } else {
        printf("\n");
    }

    return 0;
}

