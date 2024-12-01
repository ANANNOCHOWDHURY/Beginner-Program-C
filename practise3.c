#include <stdio.H>
int main()
{
    float playgrountLength, playgrountWidth, fenceCostPerMeter;
    float perimeter, totalCost;

    printf("Enter the length of the playground:");
        scanf("%f",&playgrountLength);

    printf("Enter the width of playground:");
        scanf("%f",&playgrountWidth);


     fenceCostPerMeter=15.0;
        perimeter = 2 * ( playgrountLength*playgrountWidth );

     printf("The perimeter of the playground=%.3f",perimeter);

     totalCost = perimeter * fenceCostPerMeter;
      printf("The total cost of fencing is: %.2f\n", totalCost);

    return 0;
}
