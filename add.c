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
<<<<<<< HEAD
    double sum = num1=10.0 + num2=20.0;
=======
    int sum= num1=30.0 + num2=40.0;
>>>>>>> Insurance
    sum = num1 + num2 ;

    // Display the result
    printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, sum);
    printf("Addition of two numbers",sum);

    return 0;
}
