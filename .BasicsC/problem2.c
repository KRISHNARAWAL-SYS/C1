#include <stdio.h>

int main() {
    int num1, num2, num3;
    float average;

    // Get input from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculate the average
    average = (float)(num1 + num2 + num3) / 3;

    // Print the average
    printf("Average of the three numbers is: %.2f\n", average);

    return 0;
}