#include <stdio.h>
int main() {
    int decimal = 255;
    float foatvalue = 3.141593;
    char character = 'A';
    int percentage = 33;
    printf("Integer (decimal): %d\n", decimal);
    printf("Integer (hexadecimal): %x\n", decimal);
    printf("Integer (octal): %o\n", decimal);
    printf("float   (default): %f\n", foatvalue);
    printf("float   (2 dp): %.2f\n", foatvalue);
    printf("float   (scientific): %e\n", foatvalue);
    printf("Character: %c\n", character);
    printf("Percentage: %d%%\n", percentage);
    return 0;
}