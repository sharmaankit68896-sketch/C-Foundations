#include <stdio.h>

struct TShirt {
    char size;
    float price;
    int stock;
};

int main() {
    struct TShirt inventory[3];
    float totalValue = 0;

    printf("--- HERO INVENTORY SYSTEM v1.0 ---\n");

    for(int i = 0; i < 3; i++) {
        printf("\nConfiguring Item #%d:\n", i + 1);
        
        // 1. Size Validation (Basic)
        printf("Enter Size (S/M/L): ");
        if (scanf(" %c", &inventory[i].size) != 1) {
            printf("[!] Error: Invalid Size.\n");
            while(getchar() != '\n'); continue;
        }

        // 2. Price Validation
        printf("Enter Price: ");
        if (scanf("%f", &inventory[i].price) != 1) {
            printf("[!] Error: Price must be a number.\n");
            while(getchar() != '\n'); continue;
        }

        // 3. Stock Validation
        printf("Enter Stock: ");
        if (scanf("%d", &inventory[i].stock) != 1) {
            printf("[!] Error: Stock must be an integer.\n");
            while(getchar() != '\n'); continue;
        }
    }

    // --- OUTPUT TABLE ---
    printf("\n--- CURRENT WAREHOUSE STATUS ---\n");
    printf("ID\tSIZE\tPRICE\tSTOCK\tSUBTOTAL\n");
    printf("----------------------------------------\n");
    
    for(int i = 0; i < 3; i++) {
        float subtotal = inventory[i].price * inventory[i].stock;
        totalValue += subtotal;
        printf("%d\t%c\t%.2f\t%d\t%.2f\n", i + 1, inventory[i].size, inventory[i].price, inventory[i].stock, subtotal);
    }

    printf("----------------------------------------\n");
    printf("TOTAL WAREHOUSE VALUE: INR %.2f\n", totalValue);

    return 0;
}
