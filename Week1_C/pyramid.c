#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int height;

    // Prompt for height between 1 and 8
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Build the pyramid
    for (int i = 1; i <= height; i++)
    {
        // Left spaces
        for (int s = 0; s < height - i; s++)
        {
            printf(" ");
        }

        // Left hashes
        for (int h = 0; h < i; h++)
        {
            printf("#");
        }

        // Gap
        printf("  ");

        // Right hashes
        for (int h = 0; h < i; h++)
        {
            printf("#");
        }

        printf("\n");
    }
}
