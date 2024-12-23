#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    int statementA = ((a + b) <= 80);
    int statementB = !(a + c);
    int statementC = (a != 0);

    printf("a) %d\n", statementA);
    printf("b) %d\n", statementB);
    printf("c) %d\n", statementC);

    return 0;
}

