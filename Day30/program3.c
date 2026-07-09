#include <stdio.h>

int main() {
    char departments[3][20] = {"HR", "IT", "Sales"};
    int employeeCounts[3] = {5, 25, 12};
    int choice;

    printf("1. View Department Stats\n2. Exit\n");

    while (1) {
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (int i = 0; i < 3; i++) {
                printf("Department: %s, Total Employees: %d\n", departments[i], employeeCounts[i]);
            }
        } else if (choice == 2) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}