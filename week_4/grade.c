#include <stdio.h>

// Implementation 1: Using if-else
void print_grade_if_else(int score) {
    char grade;
    const char *message;

    if (score >= 90) {
        grade = 'A';
        message = "Excellent";
    } else if (score >= 80) {
        grade = 'B';
        message = "Good";
    } else if (score >= 70) {
        grade = 'C';
        message = "Average";
    } else if (score >= 60) {
        grade = 'D';
        message = "Below Average";
    } else {
        grade = 'F';
        message = "Failing";
    }

    printf("[if-else] Grade: %c - %s\n", grade, message);
}

// Implementation 2: Using switch with score / 10
void print_grade_switch(int score) {
    char grade;
    const char *message;

    switch (score / 10) {
        case 10: // Fall-through for perfect score
        case 9:
            grade = 'A';
            message = "Excellent";
            break;
        case 8:
            grade = 'B';
            message = "Good";
            break;
        case 7:
            grade = 'C';
            message = "Average";
            break;
        case 6:
            grade = 'D';
            message = "Below Average";
            break;
        default: // Handles scores 0 through 5 (0-59)
            grade = 'F';
            message = "Failing";
            break;
    }

    printf("[switch ] Grade: %c - %s\n", grade, message);
}

int main() {
    int score;

    printf("Enter a numeric score (0-100): ");
    
    // Validate that input is actually a number
    if (scanf("%d", &score) != 1) {
        printf("Error: Invalid input. Please enter a numeric value.\n");
        return 1;
    }

    // Validate that the score is within the 0-100 range
    if (score < 0 || score > 100) {
        printf("Error: Score must be between 0 and 100.\n");
        return 1;
    }

    printf("\n--- Results ---\n");
    
    // Demonstrate both implementations
    print_grade_if_else(score);
    print_grade_switch(score);

    return 0;
}