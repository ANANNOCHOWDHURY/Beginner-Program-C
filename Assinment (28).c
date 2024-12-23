#include <stdio.h>
#include <math.h>

int main() {
    double x, result;

    printf("Enter value of x: ");
    scanf("%lf", &x);

    result = 2 * cos(x) * cos(x) - sqrt(3) * sin(x) + sin(x / 2);

    printf("Result: %.6lf\n", result);

    return 0;
}

