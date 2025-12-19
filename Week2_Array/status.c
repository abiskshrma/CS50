#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("missing command-line argument\n");
        return 1;// returning the status. checking if you still have an error.
    }
    else{
        printf("hello, %s\n", argv[1]);
        return 0;
    }
}
