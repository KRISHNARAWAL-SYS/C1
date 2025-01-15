#include <stdio.h>

int main() {
    int num1, num2, *ptr1, *ptr2;

    // Get input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Assign addresses of num1 and num2 to pointers
    ptr1 = &num1;
    ptr2 = &num2;

    // Find the maximum number using pointers
    if (*ptr1 > *ptr2) {
        printf("%d is the maximum number.\n", *ptr1);
    } else {
        printf("%d is the maximum number.\n", *ptr2);
    }

    return 0;
}