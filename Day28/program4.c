#include <stdio.h>

int main() {
    int contacts[3] = {98765, 87654, 76543};
    int choice, searchNum, found;

    printf("1. View All Contacts\n2. Search Contact\n3. Exit\n");

    while (1) {
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (int i = 0; i < 3; i++) {
                printf("Contact %d: %d\n", i + 1, contacts[i]);
            }
        } else if (choice == 2) {
            printf("Enter phone number to search: ");
            scanf("%d", &searchNum);
            found = 0;
            for (int i = 0; i < 3; i++) {
                if (contacts[i] == searchNum) {
                    printf("Contact matches database index: %d\n", i);
                    found = 1;
                    break;
                }
            }
            if (!found) printf("Contact not found!\n");
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}