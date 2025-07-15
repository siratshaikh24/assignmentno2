#include <stdio.h>

int main()
{
    float costPrice, sellingPrice, profitOrLoss;

    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    if(sellingPrice > costPrice) {
        profitOrLoss = sellingPrice - costPrice;
        printf("Profit of ₹%.2f\n", profitOrLoss);
    }
    else if(sellingPrice < costPrice) {
        profitOrLoss = costPrice - sellingPrice;
        printf("Loss of ₹%.2f\n", profitOrLoss);
    }
    else {
        printf("No profit, no loss.\n");
    }
    return 0;
}