#include <stdio.h>

int main() {
    int choice;
    int active = 1;

    while (active) {
        printf("\n--- COMMAND CENTER (V2.0) ---");
        printf("\n1. Circle  2. Square  3. Rectangle  4. Exit");
        printf("\nSelect Option: ");

        // scanf returns 1 if it successfully reads a number
        if (scanf("%d", &choice) != 1) {
            printf("[!] CRITICAL ERROR: Numeric input required.\n");
            
            // This loop clears the "junk" letters out of the keyboard memory
            while (getchar() != '\n'); 
            continue; // Restarts the loop from the top
        }

        switch (choice) {
            case 1:
                // ... (Your Circle Logic)
                break;
            case 4:
                printf("System Shutdown Initiated.\n");
                active = 0;
                break;
            default:
                printf("[?] Option not found.\n");
        }
    }
    return 0;
}
