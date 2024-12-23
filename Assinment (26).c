#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    int statement1 = ((a + b) <= 80 && b >= 0);
    int statement2 = ((a - b) == 0 || c != 0);
    int statement3 = (a != b || (b < a && c > 0));

    printf("1) %d\n", statement1);
    printf("2) %d\n", statement2);
    printf("3) %d\n", statement3);

    return 0;
}

