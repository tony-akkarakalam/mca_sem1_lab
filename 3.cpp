#include <stdio.h>

#define MAX 100

// Function to insert an element
void insert(int arr[], int *size, int value) {
    if (*size < MAX) {
        arr[*size] = value;
        (*size)++;
        printf("Element inserted successfully.\n");
    } else {
        printf("Array is full. Cannot insert more elements.\n");
    }
}

// Function to search for an element
void search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            printf("Element %d found at position %d.\n", key, i);
            return;
        }
    }
    printf("Element %d not found.\n", key);
}

// Function to delete an element
void delete(int arr[], int *size, int key) {
    int found = 0;
    for (int i = 0; i < *size; i++) {
        if (arr[i] == key) {
            found = 1;
            for (int j = i; j < *size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            (*size)--;
            printf("Element %d deleted successfully.\n", key);
            break;
        }
    }
    if (!found) {
        printf("Element %d not found. Cannot delete.\n", key);
    }
}

// Function to sort array
void sort(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
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

// Function to display elements
void display(int arr[], int size) {
    if (size == 0) {
        printf("Array is empty.\n");
    } else {
        printf("Array elements: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

int main() {
    int arr[MAX];
    int size = 0;
    int choice, value;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Insert\n");
        printf("2. Search\n");
        printf("3. Delete\n");
        printf("4. Sort\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insert(arr, &size, value);
                break;
            case 2:
                printf("Enter value to search: ");
                scanf("%d", &value);
                search(arr, size, value);
                break;
            case 3:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                delete(arr, &size, value);
                break;
            case 4:
                sort(arr, size);
                break;
            case 5:
                display(arr, size);
                break;
            case 6:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
