#include <stdio.h>

int main() {
    // Declare variables to store the two numbers
    double num1, num2;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    // Read the first number from the user
    scanf("%lf", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    // Read the second number from the user
    scanf("%lf", &num2);

    // Perform addition
    double sum = num1 + num2;
    sum = num1 + num2 ;

    // Display the result
    printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, sum);

    return 0;
}
