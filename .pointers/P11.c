
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;
    int i;

    ptr = &arr[4]; // Point to the last element of the array

    printf("Array elements in reverse order:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", *ptr);
        ptr--; // Move the pointer to the previous element
    }

    printf("\n");

    return 0;
}