#include <stdio.h>

int main() {
    double num1, num2;

    // Prompt the user for input
    printf("Enter two double values separated by a space: ");
    
    // Read two doubles and validate input
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Invalid input. Please enter numeric values.\n");
        return 1;
        }

    // Print results for +, -, *
    printf("Addition (+)       : %f\n", num1 + num2);
    printf("Subtraction (-)    : %f\n", num1 - num2);
    printf("Multiplication (*) : %f\n", num1 * num2);

    // Handle division by zero with the conditional operator
    (num2 == 0.0) ? 
        printf("Division (/)       : Error (Division by zero)\n") : 
        printf("Division (/)       : %f\n", num1 / num2);

    // Modulus requires casting to int. 
        ((int)num2 == 0) ? 
        printf("Modulus (%%)        : Error (Division by zero)\n") : 
        printf("Modulus (%%)        : %d\n", (int)num1 % (int)num2);

    return 0;
}