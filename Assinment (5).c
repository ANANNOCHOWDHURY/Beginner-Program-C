#include<stdio.h>
int main()
{
    int unitializedVar;
    int initializedVar;
    int var1 = 1, var2 = 2, var3 = 3;
    int same1 = 5, same2 = 5, same3 = 5;

    printf("Uninitialized variable (garbage value): %d\n", unitializedVar);
    printf("Initialized variable: %d\n", initializedVar);
    printf("Multiple variable with different value: %d, %d, %d\n", var1, var2, var3);
    printf("Multiple variable with the same value: %d, %d, %d", same1, same2, same3);
    return 0;
}
