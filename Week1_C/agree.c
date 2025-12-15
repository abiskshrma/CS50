#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c = get_char("Do you agree?(y/n)\n");

    if (c == 'y')
    {
        printf("You have agreed to our Terms and Conditions.\n");
    }
    else if ( c == 'n')
    {
         printf("You have NOT agreed to our Terms and Conditions.\n");
    }
    else
    {
        printf("Invalid input. pleas e type y/n.\n");
    }
}

// v2//

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c = get_char("Do you agree?(y/n)\n");

    if (c == 'y' || c == 'Y')
    {
        printf("You have agreed to our Terms and Conditions.\n");
    }

    else if ( c == 'n' || c == 'N')
    {
         printf("You have NOT agreed to our Terms and Conditions.\n");
    }

    else
    {
        printf("Invalid input. please type y/n.\n");
    }
}
