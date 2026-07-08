#include <stdio.h>

int main() {
    long long num, original, largest_factor = -1;
    
    printf("Enter a number: ");
    scanf("%lld", &num);
    
    original = num;
    
    while (num % 2 == 0) {
        largest_factor = 2;
        num /= 2;
    }
    
    for (long long i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            largest_factor = i;
            num /= i;
        }
    }
    
    if (num > 2) {
        largest_factor = num;
    }
    
    printf("The largest prime factor of %lld is: %lld\n", original, largest_factor);
    
    return 0;
}