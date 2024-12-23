#include<stdio.h>
int main()
{

    int x;
    float y;
    char z;

    printf("Enter an integer value: ");
    scanf("%d", &x);
    printf("Enter an floating point value: ");
    scanf("%f", &y);
    printf("Enter an character value: ");
    scanf("%c", &z);

    printf("The integer value: %d\n", x);
    printf("The floating point value: %f\n", y);
    printf("The character value: %c\n", z);

    return 0;
}
