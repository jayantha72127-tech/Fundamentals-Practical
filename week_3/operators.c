#include <stdio.h>
int main() {
    int a = 15, b = 4, c = 0;

    // Arithmetic operators
    printf("a + b = %d\n", a + b); // Addition
    printf("a - b = %d\n", a - b); // Subtraction
    printf("a * b = %d\n", a * b); // Multiplication
    printf("a / b = %d\n", a / b); // Division
    printf("a %% b = %d\n", a % b); // Modulus

    // Relational operators
    printf("a == b: %d\n", a == b); // Equal to
    printf("a != b: %d\n", a != b); // Not equal to
    printf("a > b: %d\n", a > b);   // Greater than
    printf("a < b: %d\n", a < b);   // Less than
    printf("a >= b: %d\n", a >= b); // Greater than or equal to
    printf("a <= b: %d\n", a <= b); // Less than or equal to

    // Logical operators
    printf("a && b: %d\n", a && b); // Logical AND
    printf("a || b: %d\n", a || b); // Logical OR
    printf("!a: %d\n", !a);         // Logical NOT
    printf("!c: %d\n", !c);         // Logical NOT
    
    //bitwise operators
    printf("a & b = %d\n", a & b); // Bitwise AND
    printf("a | b = %d\n", a | b); // Bitwise OR
    printf("a ^ b = %d\n", a ^ b); // Bitwise XOR
    printf("~a = %d\n", ~a);       // Bitwise NOT
    printf("a << 2 = %d\n", a << 2); // Left shift
    printf("a >> 1 = %d\n", a >> 1); // Right shift

    //conditional operator
    int max = (a > b) ? a : b; // Ternary operator
    printf("Max of a and b: %d\n", max);

    return 0;
}