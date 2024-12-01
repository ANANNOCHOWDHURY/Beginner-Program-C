
#include <stdio.H>
int main()
{
    float amount, discount, finalAmount;
    printf("Enter the purchase amount:$");
    scanf("%f",&amount);
    if(amount>500){
        discount=amount*0.20;
        }
    else if(amount>200){
            discount=amount*0.15;
        }
    else if(amount>100){
        discount=amount*0.10;
        }
    else if(amount>50){
        discount=amount*0.05;
        }
    else if(amount>0){
        discount=0;
        }

    finalAmount=amount-discount;

        printf("Orginal amount:$%.2f\n",amount);
        printf("Discount applied:$%.2f\n",discount);
        printf("Final amount to be paid:$%.2f",finalAmount);
        return 0;
}
