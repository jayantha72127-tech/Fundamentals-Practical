#include <stdio.h>
int main() {
    char student_name_initial[50];
    int registration_number;
    double GPA;
    int year;

    printf("Enter initial : ");
    fgets(student_name_initial, sizeof(student_name_initial), stdin); 

    printf("Enter reg. no. : ");
    scanf("%d", &registration_number);

    printf("Enter GPA: ");
    scanf("%lf", &GPA);

    printf("Enter year: ");
    scanf("%d", &year);

    printf("\n-----------------\n");
    printf("Initial: %s", student_name_initial);
    printf("Reg. No.: %d\n", registration_number);
    printf("GPA: %.2f\n", GPA);
    printf("Year: %d\n", year);

    return 0;
}