#include <stdio.h>
int main() {
    int a; 
    int b; 

    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    // Bitwise AND
    int and_result = a & b; 
    printf("a & b: %d\n", and_result);

    // Bitwise OR
    int or_result = a | b; 
    printf("a | b: %d\n", or_result);

    // Bitwise XOR
    int xor_result = a ^ b; 
    printf("a ^ b: %d\n", xor_result);

    // Bitwise left shift
    int left_shift_result = a << 1; 
    printf("a << 1: %d\n", left_shift_result);

    

    return 0;
}