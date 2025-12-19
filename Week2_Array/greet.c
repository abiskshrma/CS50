#include <stdio.h>
#include <cs50.h>

//int main(void)
int main(int argc, string argv[])
{
  //  string answer = get_string("Whats your name?\n");
    //printf("Hello, %s \n", answer);

    //printf("hello, %s\n", argv[1]);
    if (argc ==2)//here i am checking if user provided another word else it will just print hellos
    {
        printf("hello, %s\n", argv[1]);//argv[0] is always the file name.
    }
    else
    {
        printf("hello, world\n");
    }
}
