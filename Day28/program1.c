#include <stdio.h>

int main() {
    int bookIds[3] = {101, 102, 103};
    int isAvailable[3] = {1, 1, 1};
    int choice, searchId;

    printf("1. View Books\n2. Issue Book\n3. Exit\n");

    while (1) {
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (int i = 0; i < 3; i++) {
                printf("Book ID: %d - %s\n", bookIds[i], isAvailable[i] ? "Available" : "Issued");
            }
        } else if (choice == 2) {
            printf("Enter Book ID to issue: ");
            scanf("%d", &searchId);
            int found = 0;
            for (int i = 0; i < 3; i++) {
                if (bookIds[i] == searchId) {
                    found = 1;
                    if (isAvailable[i] == 1) {
                        isAvailable[i] = 0;
                        printf("Book issued successfully!\n");
                    } else {
                        printf("Book is already issued!\n");
                    }
                    break;
                }
            }
            if (!found) printf("Book not found!\n");
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}