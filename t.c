#include <stdio.h>

int main() {
    char itemName[50];
    float itemPrice, totalCost = 0, shippingCost;
    int itemCount = 0, quantity;
    char overnightShipping, continueShopping;


    printf("Welcome to the Online Shopping System!\n");

    do {
        // Get item information
        printf("\nEnter the item name: ");
        scanf("%s", itemName);

        printf("Enter the quantity of items: ");
        scanf("%d", &quantity);

        if (quantity <= 0) {
            printf("Invalid quantity. Please enter a positive quantity.\n");
            continue;
        }

        printf("Enter the price of the item: ");
        scanf("%f", &itemPrice);

        if (itemPrice < 0) {
            printf("Invalid price. Please enter a non-negative price.\n");
            continue;
        }

        printf("Does the item require overnight shipping? (y for yes, n for no): ");
        scanf(" %c", &overnightShipping);

        // Calculate shipping cost
        if (itemPrice < 10) {
            shippingCost = 2.00;
        } else {
            shippingCost = 3.00;
        }

        if (overnightShipping == 'y' || overnightShipping == 'Y') {
            shippingCost += 5.00;
        }

        // Calculate total cost
        totalCost += (itemPrice + shippingCost) * quantity;
        itemCount += quantity;

        // Display order information
        printf("\nOrder Information:\n");
        printf("Item Name: %s\n", itemName);
        printf("Price for an item: $%.2f\n", itemPrice);
        printf("Shipping Cost: $%.2f\n", shippingCost);

        // Ask if the customer wants to continue shopping
        printf("\nDo you want to continue shopping? (y/n): ");
        scanf(" %c", &continueShopping);

    } while (itemCount < 2 || continueShopping == 'y' || continueShopping == 'Y');

    // Apply discount if applicable
    if (itemCount > 5) {
        totalCost *= 0.8; // 20% discount
    }

    // Display order receipt
    printf("\n--Order Receipt--\n");
    printf("Items ordered: %d\n", itemCount);
    printf("Total cost: $%.2f\n", totalCost);
    printf("Discounted Total Cost: $%.2f\n", totalCost);  // No discount applied

    printf("\nThank you for shopping with us! Have a great day!\n");
    return 0;
}
