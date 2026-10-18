
#include <stdio.h>

int main() {
    int choice, quantity, eligible;
    float price, subtotal, discount = 0, finalBill;
    char product[50];

    printf("=====================================\n");
    printf("   COMMUNITY PHARMACY BILLING SYSTEM\n");
    printf("=====================================\n");

    printf("\nAvailable Products:\n");
    printf("1. Vitamin C                 - PHP 12.00\n");
    printf("2. Paracetamol               - PHP 8.00\n");
    printf("3. Oral Rehydration Salt     - PHP 25.00\n");

    printf("\nSelect product (1-3): ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid product choice!\n");
        return 1;
    }

    switch (choice) {
        case 1:
            price = 12.00;
            sprintf(product, "Vitamin C");
            break;

        case 2:
            price = 8.00;
            sprintf(product, "Paracetamol");
            break;

        case 3:
            price = 25.00;
            sprintf(product, "Oral Rehydration Salt");
            break;

        default:
            printf("Invalid product choice! Please select 1-3.\n");
            return 1;
    }

    printf("Enter quantity: ");
    if (scanf("%d", &quantity) != 1 || quantity <= 0) {
        printf("Invalid quantity! Quantity must be greater than 0.\n");
        return 1;
    }

    printf("Eligible for 20%% discount? (1 = Yes, 0 = No): ");
    if (scanf("%d", &eligible) != 1 ||
        (eligible != 0 && eligible != 1)) {
        printf("Invalid discount choice! Enter 1 or 0.\n");
        return 1;
    }

    subtotal = price * quantity;

    if (eligible == 1) {
        discount = subtotal * 0.20;
    }

    finalBill = subtotal - discount;

    printf("\n=====================================\n");
    printf("          PHARMACY RECEIPT\n");
    printf("=====================================\n");
    printf("Product:          %s\n", product);
    printf("Price per unit:   PHP %.2f\n", price);
    printf("Quantity:         %d\n", quantity);
    printf("Subtotal:         PHP %.2f\n", subtotal);
    printf("Discount:         PHP %.2f\n", discount);
    printf("Final Bill:       PHP %.2f\n", finalBill);
    printf("=====================================\n");
    printf("Thank you for your purchase!\n");

    return 0;
}
