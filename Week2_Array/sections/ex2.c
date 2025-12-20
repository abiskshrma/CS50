#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //lets try to print them in reverse

    //check if user does not provided an input
    if (argc !=2)
    {
        printf("Please provide an input\n");
        return 1;
    }

    //assigning the string the user gave in termainal
    string s = argv[1];

    //check if the user gave only alphabet
    for (int i=0; i< strlen(s); i++)
    {
        if (!isalpha(s[i]))
        {
            printf("This is not a aplhabet\n");
            return 2;
        }
    }

    //reverse the string!
    int x = strlen(s);
    for (int i = x; i >= 0; i--)
    {
        printf("%c" ,s[i]);
    }
    printf("\n");

    //check if a lowercase string's character are in alphabetical order

    //get user input
    string y = get_string("Input: ");

    //iterate through each element
    for (int i = 1; i < strlen(y); i++)        //Check if it is alphabatical
    {
        if ( y[i] < y[i-1])
        {
            printf("No\n");
            return 0;
        }
     }
      printf("Yes\n");    //print yes or no
}
