#include <stdio.h>

int main() {
    int secretNumber = 45;
    int guess;
    
    printf("Guess a number between 1 and 100: ");
    
    while (1) {
        scanf("%d", &guess);
        
        if (guess == secretNumber) {
            printf("Correct! You won.\n");
            break;
        } else if (guess < secretNumber) {
            printf("Too low! Try again: ");
        } else {
            printf("Too high! Try again: ");
        }
    }
    
    return 0;
}