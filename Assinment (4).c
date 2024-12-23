#include<stdio.h>
int main()
{
    int x, y;
    float b, c;
    char d, e;

    x = 5;
    y = 100;
    b = 3.141593;
    c = 1.618000;
    d = 'a';
    e = 'z';

    printf("The integer value: %d\n", x);
    printf("The floating point value: %.6f\n", b);
    printf("The character value: %c\n", d);

    printf("The integer value: %d\n", y);
    printf("The floating point value: %.6f\n",c);
    printf("The character value: %c\n", e);

    return 0;
}
