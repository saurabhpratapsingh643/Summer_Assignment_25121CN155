#include <stdio.h>

int main() {
    int totalSeats = 5;
    int bookedSeats = 0;
    int choice, tickets;

    printf("1. View Available Seats\n2. Book Tickets\n3. Exit\n");

    while (1) {
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Seats available: %d\n", totalSeats - bookedSeats);
        } else if (choice == 2) {
            printf("Enter number of tickets to book: ");
            scanf("%d", &tickets);
            if (tickets <= (totalSeats - bookedSeats)) {
                bookedSeats += tickets;
                printf("Booking successful!\n");
            } else {
                printf("Not enough seats available!\n");
            }
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}