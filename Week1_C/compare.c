#include <stdio.h> // Header File. anything with .h is a header file.//
#include <cs50.h>

int main(void)
{

    int x = get_int("What is the number x?");
    int y = get_int("what is the number y?");

    if (x > y)
    {
        printf("x is greater than y\n");
    }
    else if (x == y)
    {
        printf("X is equal to y\n");
    }
    else
    {
        printf("x is lower than y\n");
    }
}
