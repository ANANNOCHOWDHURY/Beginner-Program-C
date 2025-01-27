#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the first number (X): ");
    scanf("%d", &x);
    printf("Enter the second number (Y): ");
    scanf("%d", &y);
    if (x > y) {
        printf("%d is greater than %d\n", x, y);
    } else if (x < y) {
        printf("%d is less than %d\n", x, y);
    } else {
        printf("%d is equal to %d\n", x, y);
    }

    return 0;
}
