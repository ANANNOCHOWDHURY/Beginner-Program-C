#include <stdio.h>

int main() {
    float X, Y;

    printf("Enter two numbers (X Y): ");
    scanf("%f %f", &X, &Y);

    printf("Addition: %.1f\n", X + Y);

    printf("Subtraction: %.1f\n", X - Y);

    printf("Multiplication: %.1f\n", X * Y);

    if (Y != 0) {
        printf("Quotient: %.1f\n", X / Y);
        printf("Reminder: %.1f\n", (int)X % (int)Y);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}

