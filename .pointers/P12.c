#include <stdio.h>

int main() {
    char *ptr;
    char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

    ptr = alphabets; // Point to the beginning of the string

    printf("Alphabets:\n");
    while (*ptr != '\0') { // Continue until the null character is reached
        printf("%c ", *ptr);
        ptr++; // Move the pointer to the next character
    }

    printf("\n");

    return 0;
}