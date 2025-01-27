#include <stdio.h>
int isPowerOfTwo(unsigned int x) {
    return (x != 0) && ((x & (x - 1)) == 0);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        if (isPowerOfTwo(number)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    } else if (number == 0) {
        printf("Zero is not a valid input\n");
    } else {
        printf("Negative input is not valid\n");
    }

    return 0;
}
