#include <stdio.h>

char items[3][20] = {"Laptop", "Phone", "Tablet"};
int prices[3] = {50000, 15000, 25000};

void displayStoreItems() {
    for (int i = 0; i < 3; i++) {
        printf("Item %d: %s | Price: Rs %d\n", i + 1, items[i], prices[i]);
    }
}

int main() {
    int choice;

    printf("--- Welcome to Mini Tech Shop ---\n");
    printf("1. Show Available Products\n2. Close Store\n");

    while (1) {
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            displayStoreItems();
        } else if (choice == 2) {
            printf("Thank you for visiting!\n");
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}