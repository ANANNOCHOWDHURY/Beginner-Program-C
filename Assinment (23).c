#include <stdio.h>

int main() {
    int x, y;

    printf("Enter two numbers (x y): ");
    scanf("%d %d", &x, &y);

    int max = (x > y) ? x : y;
    printf("Max: %d\n", max);

    return 0;
}
