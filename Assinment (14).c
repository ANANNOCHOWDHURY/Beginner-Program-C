#include <stdio.h>

int var = 10;

void printValues() {
    printf("A. Global: %d\n", var);

    {
        int var = 20;
        printf("B. Local: %d\n", var);
    }

    printf("C. Global: %d\n", var);
}

int main() {
    printValues();
    return 0;
}
