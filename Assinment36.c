#include <stdio.h>
int isPowerOfTwo(unsigned int x) {
    return (x != 0) && ((x & (x - 1)) == 0);
}

int main() {
    unsigned int number;
    printf("Enter a positive non-zero number: ");
    scanf("%u", &number);

    if (isPowerOfTwo(number)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
