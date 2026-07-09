#include <stdio.h>

int main() {
    int itemIds[3] = {501, 502, 503};
    int stock[3] = {10, 5, 0};
    int choice, searchId;

    printf("1. Check Stock Status\n2. Sell Item\n3. Exit\n");

    while (1) {
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (int i = 0; i < 3; i++) {
                printf("Item ID: %d - Quantity: %d\n", itemIds[i], stock[i]);
            }
        } else if (choice == 2) {
            printf("Enter Item ID to sell: ");
            scanf("%d", &searchId);
            int found = 0;
            for (int i = 0; i < 3; i++) {
                if (itemIds[i] == searchId) {
                    found = 1;
                    if (stock[i] > 0) {
                        stock[i]--;
                        printf("Item sold! Remaining stock: %d\n", stock[i]);
                    } else {
                        printf("Out of stock!\n");
                    }
                    break;
                }
            }
            if (!found) printf("Item not found!\n");
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}