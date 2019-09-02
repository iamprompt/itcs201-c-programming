#include <stdio.h>

int main()
{
    // Declare Variables
    int productID1, productID2, productID3, productID4;
    float price1, price2, price3, price4;

    // Receive Data
    scanf("%d %f", &productID1, &price1);
    scanf("%d %f", &productID2, &price2);
    scanf("%d %f", &productID3, &price3);
    scanf("%d %f", &productID4, &price4);

    // Print the Formatted Value
    printf("%5d %10.2f\n", productID1, price1);
    printf("%5d %10.2f\n", productID2, price2);
    printf("%5d %10.2f\n", productID3, price3);
    printf("%5d %10.2f\n", productID4, price4);
}