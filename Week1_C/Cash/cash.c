#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int change;

    // Prompt for change owed until a valid input
    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 0);

    int owed = 0;

    // Calculate how many quarters you should give customer
    while (change >= 25)
       {
        change -= 25;
        owed++;
       }

    // Calculate how many dimes you should give customer
    while (change >= 10)
       {
        change -= 10;
        owed++;
       }

    // Calculate how many nickels you should give customer
    while (change >= 5)
       {
        change -= 5;
        owed++;
       }

    // Calculate how many pennies you should give customer
    while (change >= 1)
       {
        change -= 1;
        owed++;
       }


    printf("%i\n", owed);
}

