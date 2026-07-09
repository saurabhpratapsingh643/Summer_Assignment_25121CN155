#include <stdio.h>

int main() {
    int answer;
    int score = 0;
    
    printf("Q1. What is the capital of India?\n1. Mumbai\n2. New Delhi\n3. Goa\n");
    printf("Enter option number: ");
    scanf("%d", &answer);
    if (answer == 2) {
        score++;
    }
    
    printf("\nQ2. Which language is used for this program?\n1. Java\n2. Python\n3. C Language\n");
    printf("Enter option number: ");
    scanf("%d", &answer);
    if (answer == 3) {
        score++;
    }
    
    printf("\nYour total score: %d/2\n", score);
    return 0;
}