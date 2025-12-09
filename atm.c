


#include <stdio.h>
#include <stdlib.h>


float balance = 0.00;
void showBalance();
void showMenu();
void deposit();
void withdraw();

int login() {

    const int correctPin = 1234;
    int enteredPin;
    int attempts = 0;
    int maxAttempts = 3;

    printf("\n*** Welcome to the Simple ATM ***\n");

    while (attempts < maxAttempts) {
        printf("Enter PIN (%d attempts left): ", maxAttempts - attempts);
        scanf("%d", &enteredPin);

        if (enteredPin == correctPin) {
            printf("\n Access Granted\n");
            return 1;
        } else {
            attempts++;
            if (attempts < maxAttempts) {
                printf("Incorrect PIN.\n");
            }
        }
    }

    printf("maximum attempts reached");
    return 0;
}


void showBalance() {
    printf("\n>>> Your current balance is: $%.2f\n", balance);
}


void deposit() {
    float amount;

    printf("deposit funds");
    printf("Enter amount to deposit: $");
    if (scanf("%f", &amount) == 1 && amount > 0) {
        balance += amount;
        printf("Deposit successful.\n");
        showBalance();
    } else {
        printf("Invalid amount");
    }
}


void withdraw() {
    float amount;

    printf("Withdraw Funds");
    printf("Enter amount to withdraw");
    if (scanf("%f", &amount) == 1 && amount > 0) {
        if (balance >= amount) {
            balance -= amount;
            printf("Withdrawal successful.\n");

            showBalance();
        } else {
            printf("Insufficient balance. Withdrawal denied.\n");
            showBalance();
        }
    } else {
        printf("Invalid amount. Withdrawal must be positive.\n");
    }
}

void showMenu() {
    int choice;

    do {
        printf("\n ATM Menu \n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Select option (1-4): ");

        if (scanf("%d", &choice) != 1) {
            choice = 0;
            while(getchar() != '\n');
        }

        switch (choice) {
            case 1: showBalance(); break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: printf("Thank you for using the ATM "); break;
            default: printf("Invalid choice. Please try again");
        }
    } while (choice != 4);
}

int main() {

    if (login()) {
        showMenu();
    }


    return 0;
}
