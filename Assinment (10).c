#include <stdio.h>

int main() {

    long int longIntValue1 = 2147483647;
    long long int longLongIntValue1 = 9223372036854775807;
    long double longDoubleValue1 = 1.1E+4932;
    short int shortIntValue1 = 32767;


    printf("The long int value: %ld\n", longIntValue1);
    printf("The long long int value: %lld\n", longLongIntValue1);
    printf("The long double value: %Le\n", longDoubleValue1);
    printf("The short int value: %hd\n", shortIntValue1);


    long int longIntValue2 = -2147483648;
    long long int longLongIntValue2 = -9223372036854775808;
    long double longDoubleValue2 = 3.4E-4932;
    short int shortIntValue2 = -32768;


    printf("The long int value: %ld\n", longIntValue2);
    printf("The long long int value: %lld\n", longLongIntValue2);
    printf("The long double value: %Le\n", longDoubleValue2);
    printf("The short int value: %hd\n", shortIntValue2);

    return 0;
}
