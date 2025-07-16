#include <stdio.h>

// Global variable
int globalVar = 10;

// Function to demonstrate static and local variables
void demonstrateStorageClasses() {
    // Local variable
    int localVar = 5;

    // Static variable (retains value between function calls)
    static int staticVar = 0;

    // Register variable (to store variable in CPU register)
    register int registerVar = 1;

    // Display values
    printf("Local Variable: %d\n", localVar);
    printf("Static Variable: %d\n", staticVar);
    printf("Register Variable: %d\n", registerVar);

    // Modify static variable
    staticVar++;
}

int main() {
    printf("Global Variable (Before): %d\n\n", globalVar);

    printf("First Call:\n");
    demonstrateStorageClasses();

    printf("\nSecond Call:\n");
    demonstrateStorageClasses();

    printf("\nGlobal Variable (After): %d\n", globalVar);

    return 0;
}

