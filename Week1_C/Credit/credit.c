#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number;

     // Prompt for change owed until a valid input
    do
    {
        number = get_long("Number: ");
    }
    while (number <= 0);

    // Luhn’s Algorithm
    int sum = 0;
    bool alternate = false;
    long temp = number;

    while (temp > 0)
    {
        int digit = temp % 10;

        if (alternate)
        {
            digit *= 2;
            if (digit > 9)
            {
                digit = (digit / 10) + (digit % 10);
            }
        }

        sum += digit;
        alternate = !alternate; // flips for every second digit
        temp /= 10;
    }

    // Checksum validation
    if (sum % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    // Length and starting digits
    long start = number;
    int length = 0;

    while (start >= 100)
    {
        start /= 10;
        length++;
    }
    length += 2;

    //Card type
    if (length == 15 && (start == 34 || start == 37))
    {
     printf("AMEX\n");
    }
    else if (length == 16 && start >= 51 && start <= 55)
    {
     printf("MASTERCARD\n");
    }
    else if ((length == 13 || length == 16) && start / 10 == 4)
    {
     printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }

}
