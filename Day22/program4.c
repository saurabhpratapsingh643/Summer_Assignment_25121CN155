#include <stdio.h>

int main() {
    char str[] = "h e l l o";
    int count = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[count] = str[i];
            count++;
        }
    }
    str[count] = '\0';
    
    printf("%s\n", str);
    return 0;
}