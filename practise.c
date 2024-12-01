#include <stdio.H>
int main()
{
 int a, b, c, d, e, sum, ave;

    printf("Enter the 1st number:");
 scanf("%d",&a);
    printf("Enter the 2nd number:");
 scanf("%d",&b);
    printf("Enter the 3rd number:");
 scanf("%d",&c);
    printf("Enter the 4th number:");
 scanf("%d",&d);
    printf("Enter the 5th number:");
 scanf("%d",&e);
 sum = a+b+c+d+e;
 ave = sum/5;
 printf("The sum is =%d+%d+%d+%d+%d=%d\n",a,b,c,d,e,sum);
 printf("The ave is =%d/5=%d",sum,ave);
}
