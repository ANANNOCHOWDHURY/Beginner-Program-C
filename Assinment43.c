#include <stdio.h>

int main() {
    float a, b;
    int choice, case_choice;
    printf("Enter two real numbers (a b): ");
    scanf("%f %f", &a, &b);
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Addition: %.2f\n", a + b);
    } else if (choice == 2) {
        printf("Subtraction: %.2f\n", a - b);
    } else if (choice == 3) {
        printf("Multiplication: %.2f\n", a * b);
    } else if (choice == 4) {
        if (b != 0) {
            printf("1. Quotient\n2. Remainder\n");
            printf("Enter your choice (1-2): ");
            scanf("%d", &case_choice);

            if (case_choice == 1) {
                printf("Quotient: %.6f\n", a / b);
            } else if (case_choice == 2) {
                printf("Remainder: %.2f\n", a - ((int)(a / b) * b));
            } else {
                printf("Invalid case choice\n");
            }
        } else {
            printf("Division: Zero as divisor is not valid!\n");
        }
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
