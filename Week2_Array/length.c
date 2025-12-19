#include <stdio.h>
#include <cs50.h>
#include <string.h>

int string_length(string s);

int main(void)
{
    string name = get_string("Name: ");

    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }

    printf("%i\n", n);

    //string length using a function
    int length = string_length(name);
    printf("%i\n", length);

    //with a built in length calculator
    int strln;
    strln = strlen(name);
    printf("%i\n", strln);
}

int string_length(string s)
{
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }

    return n;
}
