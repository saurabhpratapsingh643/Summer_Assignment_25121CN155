#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp > 0) {
        if (temp % 2 == 1) {
            count++;
        }
        temp = temp / 2;
    }

    printf("Number of set bits (1s) in %d is: %d\n", num, count);

    return 0;
}