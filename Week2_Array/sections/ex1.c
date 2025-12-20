#include <stdio.h>
#include<cs50.h>

int const size =5;//if needed you can use size to replay the size of array all over

int main(void)
{
    //declear an array
    int array[5];
    int number[5];
    number[0] = 1;

    //populate an array
    array[0] = 1;
    array[1] = 2;
    array[2] = 4;
    array[3] = 8;
    array[4] = 16;

    //populate array using for loop
    for (int i=0; i<5; i++)
    {
        number[i+1] = number[i]*2;
        printf("%i\n", number[i]);
    }

    //print the values one by ones
    for (int i = 0; i < 5; i++)
    {
        printf("%i\n", array[i]);
    }
}
