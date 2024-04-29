#include <cs50.h>
#include <stdio.h>

int calculateCoins(int coinValue, int amountValue)
{
    int coins = 0;
    while (amountValue >= coinValue)
    {
        amountValue -= coinValue;
        coins++;
    }
    return coins;
}

int calculateChange(int amount)
{
    int allCoins = 0;
    int quarterCoins, tenCoins, fiveCoins, oneCentCoins;
    while (amount > 0)
    {
        if (amount >= 25)
        {
            quarterCoins = calculateCoins(25, amount);
            amount -= 25 * quarterCoins;
            allCoins += quarterCoins;
        }
        else if (amount >= 10)
        {
            tenCoins = calculateCoins(10, amount);
            amount -= 10 * tenCoins;
            allCoins += tenCoins;
        }
        else if (amount >= 5)
        {
            fiveCoins = calculateCoins(5, amount);
            amount -= 5 * fiveCoins;
            allCoins += fiveCoins;
        }
        else
        {
            oneCentCoins = calculateCoins(1, amount);
            amount -= 1 * oneCentCoins;
            allCoins += oneCentCoins;
        }
    }
    return allCoins;
}

int main(void)
{
    int amount, change;
    change = 0;

    do
    {
        amount = get_float("Change owed: ");
    }
    while (amount < 0);
    change = calculateChange(amount);

    printf("%i \n", change);
}
