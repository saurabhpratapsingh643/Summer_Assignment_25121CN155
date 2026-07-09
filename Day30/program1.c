#include <stdio.h>

int main() {
    char names[3][20] = {"Rahul", "Amit", "Priya"};
    int rolls[3] = {101, 102, 103};
    int choice;

    printf("1. Display Records\n2. Exit\n");

    while (1) {
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (int i = 0; i < 3; i++) {
                printf("Roll: %d, Name: %s\n", rolls[i], names[i]);
            }
        } else if (choice == 2) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}