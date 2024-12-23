#include <stdio.h>
#include <math.h>

int main() {
    float purchased_amount, rate_per_liter, discount_rate, vat_rate = 20, donation = 2;
    float total_cost, discount, vat, final_price;

    printf("Enter purchased amount of oil (in liters): ");
    scanf("%f", &purchased_amount);
    printf("Enter today's rate per liter (in tk): ");
    scanf("%f", &rate_per_liter);
    printf("Enter discount rate (in percentage): ");
    scanf("%f", &discount_rate);

    total_cost = purchased_amount * rate_per_liter;
    discount = (discount_rate / 100) * total_cost;
    vat = (vat_rate / 100) * total_cost;

    final_price = total_cost + vat - discount + donation;
    final_price = floor(final_price * 100) / 100;

    printf("Final price: %.2f tk\n", final_price);

    return 0;
}

