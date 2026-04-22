#include <stdio.h>

int main() {
    int choice;
    float side, radius, area;
    int active = 1; // 1 means True, the program is "on"

    while (active) {
        printf("\n--- COMMAND CENTER ---");
        printf("\n1. Calculate Circle Area");
        printf("\n2. Calculate Square Area");
        printf("\n3. Exit System");
        printf("\nSelect Option: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter Radius: ");
                scanf("%f", &radius);
                printf("Result: %.2f\n", 3.14159 * radius * radius);
                break;
            case 2:
                printf("Enter Side: ");
                scanf("%f", &side);
                printf("Result: %.2f\n", side * side);
                break;
            case 3:
                printf("Shutting down...\n");
                active = 0; // This breaks the loop
                break;
            default:
                printf("[!] Invalid Choice. Try again.\n");
        }
    }
    return 0;
}
