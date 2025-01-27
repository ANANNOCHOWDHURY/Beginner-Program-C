#include <stdio.h>

int main() {
    float number1, number2;
    char operator;
    printf("Enter an expression (e.g., 100 * 55.5): ");
    scanf("%f %c %f", &number1, &operator, &number2);
    switch (operator) {
        case '+':
            printf("Addition: %.2f\n", number1 + number2);
            break;
        case '-':
            printf("Subtraction: %.2f\n", number1 - number2);
            break;
        case '*':
            printf("Multiplication: %.2f\n", number1 * number2);
            break;
        case '/':
            if (number2 != 0) {
                printf("Division: %.6f\n", number1 / number2);
            } else {
                printf("Division: Zero as divisor is not valid!\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
