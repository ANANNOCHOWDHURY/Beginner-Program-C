#include <stdio.h>

int main() {
    int intValue = -150;
    float floatValue = 123.125;

    int intAssigned = floatValue;
    float floatAssigned = intValue;

    float floatCasted = (float)intValue;
    int intCasted = (int)floatValue;

    printf("Assignment: %.6f assigned to an int produces %d\n", floatValue, intAssigned);
    printf("Assignment: %d assigned to a float produces %.6f\n", intValue, floatAssigned);
    printf("Type Casting: (float) %d produces %.6f\n", intValue, floatCasted);
    printf("Type Casting: (int) %.6f produces %d\n", floatValue, intCasted);

    return 0;
}

