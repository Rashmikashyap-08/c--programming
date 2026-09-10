#include <stdio.h>

int main() {
    float item1, item2, item3;
    float sum, discount, finalPrice;

    printf("Enter price of item 1: ");
    scanf("%f", &item1);

    printf("Enter price of item 2: ");
    scanf("%f", &item2);

    printf("Enter price of item 3: ");
    scanf("%f", &item3);

    sum = item1 + item2 + item3;

    if (sum < 5000) {
        discount = (sum * 5) / 100;
    }
    else if (sum <= 10000) {
        discount = (sum * 10) / 100;
    }
    else {
        discount = (sum * 15) / 100;
    }

    finalPrice = sum - discount;

    printf("Total price = %.2f\n", sum);
    printf("Discount = %.2f\n", discount);
    printf("You have to pay = %.2f\n", finalPrice);

    return 0;
}