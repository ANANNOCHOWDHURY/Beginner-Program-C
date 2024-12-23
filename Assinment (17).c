#include <stdio.h>

int main() {
    float r, circumference;
    const float PI = 3.14;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);


    circumference = 2 * PI * r;

    printf("Circumference: %.2f\n", circumference);

    return 0;
}

