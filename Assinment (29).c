#include <stdio.h>
#include <math.h>

int main() {
    float X, A, B, C;

    printf("Enter a floating point number (X): ");
    scanf("%f", &X);

    A = ceil(X);
    B = floor(X);
    C = fabs(X);

    printf("A = %.1f, B = %.1f, C = %.1f\n", A, B, C);

    return 0;
}

