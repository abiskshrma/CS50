#include <stdio.h>

void meow(int n);

int main(void)
{
    int i = 3;
    while (i>0)
    {
        printf("Meow\n");
        i--;
    }

    int o =1;
    while (o <= 3)
    {
        printf("Meow\n");
        o++;
    }

    for (int p = 0; p <= 3; p++)
    {
        printf("Meeeeeeooooooooooooow\n");
    }

    for (int p = 0; p <= 3; p++)
    {
        meow(3);
    }

    meow(3);
}

void meow(int n)
    {
        for (int x = 0; x <= n; x++)
        {
            printf("Meeeoooow\n");
        }

    }

