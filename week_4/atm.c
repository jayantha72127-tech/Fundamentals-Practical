#include <stdio.h>  

int main() {
    int choice;
    float balance = 25000.00; // Initial balance

    printf("Welcome to the ATM!\n");
    printf("Your current balance is: $%.2f\n", balance);

    printf("Please select an option:\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input.\n");
        return 0;
    }

    switch (choice) {
        case 1:
            printf("Your current balance is: $%.2f\n", balance);
            break;
        case 2:
            {
                float deposit;
                printf("Enter the amount to deposit: ");
                if (scanf("%f", &deposit) != 1 || deposit <= 0) {
                    printf("Invalid deposit amount.\n");
                    return 0;
                }
                balance += deposit;
                printf("Deposit successful. Your new balance is: $%.2f\n", balance);
            }
            break;
        case 3:
            {
                float withdraw;
                printf("Enter the amount to withdraw: ");
                if (scanf("%f", &withdraw) != 1 || withdraw <= 0) {
                    printf("Invalid withdrawal amount.\n");
                    return 0;
                }
                if (withdraw > balance) {
                    printf("Insufficient funds.\n");
                } else {
                    balance -= withdraw;
                    printf("Withdrawal successful. Your new balance is: $%.2f\n", balance);
                }
            }
            break;
        case 4:
            printf("Thank you for using the ATM. Goodbye!\n");
            break;
        default:
            printf("Invalid option. Please try again.\n");
            break;
    }

    return 0;
}