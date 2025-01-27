#include <stdio.h>

int main() {
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number > 0) {
        printf("%lf is Positive\n", number);
    } else if (number < 0) {
        printf("%lf is Negative\n", number);
    } else {
        printf("%lf is Zero\n", number);
    }

    return 0;
}
