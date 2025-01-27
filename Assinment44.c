#include <stdio.h>

int main() {
    float a, b, quotient;
    int choice, case_choice, remainder;

    printf("Enter the first number (a): ");
    scanf("%f", &a);
    printf("Enter the second number (b): ");
    scanf("%f", &b);

    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Addition: %.2f\n", a + b);
            break;
        case 2:
            printf("Subtraction: %.2f\n", a - b);
            break;
        case 3:
            printf("Multiplication: %.2f\n", a * b);
            break;
        case 4:
            printf("Enter 1 for Quotient or 2 for Remainder: ");
            scanf("%d", &case_choice);
            if (case_choice == 1) {
                quotient = a / b;
                printf("Quotient: %.2f\n", quotient);
            } else if (case_choice == 2) {
                remainder = (int)a % (int)b;
                printf("Remainder: %d\n", remainder);
            } else {
                printf("Invalid Case\n");
            }
            break;
        default:
            printf("Invalid Choice\n");
    }

    return 0;
}
