// Libreries
#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    int cents;

    do
    {
        float dollars = get_float("Change owed: ");
        cents = round(dollars * 100);
    }
    while (cents <= 0);
// Vals and Core
    int quarters = cents / 25;
    int dimes = (cents % 25) / 10;
    int nickels = ((cents % 25) % 10) / 5;
    int pennies = ((cents % 25) % 10) % 5;
//print
    printf("%d\n", quarters + dimes + nickels + pennies);
}