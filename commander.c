#include <stdio.h>

int main() {
    int choice;
    float radius, side, length, width, area;
    int active = 1; 

    while (active) {
        printf("\n--- COMMAND CENTER v2.0 ---");
        printf("\n1. Calculate Circle Area");
        printf("\n2. Calculate Square Area");
        printf("\n3. Calculate Rectangle Area"); // New Option
        printf("\n4. Exit System");
        printf("\nSelect Option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Radius: ");
                scanf("%f", &radius);
                area = 3.14159 * radius * radius;
                printf("Result: %.2f\n", area);
                break;

            case 2:
                printf("Enter Side: ");
                scanf("%f", &side);
                area = side * side;
                printf("Result: %.2f\n", area);
                break;

            case 3:
                printf("Enter Length: ");
                scanf("%f", &length);
                printf("Enter Width: ");
                scanf("%f", &width);
                area = length * width;
                printf("Result: %.2f\n", area);
                break;

            case 4:
                printf("Shutting down security protocols...\n");
                active = 0; 
                break;

            default:
                printf("[!] Invalid Choice. Access Denied. Try again.\n");
        }
    }

    return 0;
}

