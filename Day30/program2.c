#include <stdio.h>

int main() {
    char bookTitles[3][30] = {"C Programming", "Java Basics", "Web Design"};
    int choice;

    printf("1. View Library Catalog\n2. Exit\n");

    while (1) {
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (int i = 0; i < 3; i++) {
                printf("Book %d: %s\n", i + 1, bookTitles[i]);
            }
        } else if (choice == 2) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}