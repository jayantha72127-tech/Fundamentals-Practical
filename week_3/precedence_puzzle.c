#include <stdio.h>
int main() {
    printf("Result of 2 + 3 * 4 = %d\n", 2 + 3 * 4); // Expected: 14
    printf("Result of (2 + 3) * 4 = %d\n", (2 + 3) * 4); // Expected: 20
    printf("Result of 10/2+3 = %d\n", 10 / 2 + 3); // Expected: 8
    printf("Result of 10/(2+3) = %d\n", 10 / (2 + 3)); // Expected: 2
    printf("Result of 5>3&&2<4 = %d\n", 5 > 3 && 2 < 4); // Expected: 1
    printf("Result of 5>3||2>4 = %d\n", 5 > 3 || 2 > 4); // Expected: 1

    return 0;
}