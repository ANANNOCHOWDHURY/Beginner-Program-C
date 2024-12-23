#include <stdio.h>

int main() {

    unsigned int unsignedIntValue1 = 4294967295;
    unsigned long int unsignedLongIntValue1 = 4294967295;
    unsigned long long int unsignedLongLongIntValue1 = 18446744073709551615U;
    unsigned short int unsignedShortIntValue1 = 65535;


    printf("The unsigned int value: %u\n", unsignedIntValue1);
    printf("The unsigned long int value: %lu\n", unsignedLongIntValue1);
    printf("The unsigned long long int value: %llu\n", unsignedLongLongIntValue1);
    printf("The unsigned short int value: %hu\n", unsignedShortIntValue1);


    unsigned int unsignedIntValue2 = 0;
    unsigned long int unsignedLongIntValue2 = 0;
    unsigned long long int unsignedLongLongIntValue2 = 0;
    unsigned short int unsignedShortIntValue2 = 0;


    printf("The unsigned int value: %u\n", unsignedIntValue2);
    printf("The unsigned long int value: %lu\n", unsignedLongIntValue2);
    printf("The unsigned long long int value: %llu\n", unsignedLongLongIntValue2);
    printf("The unsigned short int value: %hu\n", unsignedShortIntValue2);

    return 0;
}

