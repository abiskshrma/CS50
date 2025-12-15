#include <stdio.h> // Header File. anything with .h is a header file.//
#include <cs50.h>

int main(void){
    printf("Hello world\n");
    printf("Hello \"World\"\n");
    string answer = get_string("What is your name?\n");
    int number = get_int("How old are you?\n");
    int new = number++;
    printf("Hello %s\n", answer);
    printf("You are %i years old.\n ", new);
    printf("You will be %i years old next year.\n", number);
}

