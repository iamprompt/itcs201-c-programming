#include <stdio.h>

int main()
{
    // Declare Variable
    int money, ten, five, remainMoney;
    // Receive an input money
    printf("Give me your money:");
    scanf("%d", &money);
    // Change money to coins: 10, 5, 1
    ten = money / 10;
    remainMoney = money % 10;
    five = remainMoney / 5;
    remainMoney = remainMoney % 5;
    // Display change amounts of each type of coins
    printf("Here is your changes.\n");
    printf("Ten:%d, Five:%d, One:%d\n", ten, five, remainMoney);
    return 0;
}