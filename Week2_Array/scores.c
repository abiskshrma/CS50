#include <stdio.h>
#include <cs50.h>

//constant (average using a defined function)
const int N=3;


float average(int length, int array[]);

int main(void)
{

    //Normal Method
    int score1 = 72;
    int score2 = 73;
    int score3 = 74;

    //print average
    printf("Average: %i\n", (score1 + score2 + score3)/3);
    printf("Average: %f\n", (score1 + score2 + score3)/3.0);


    //defining array
    int scores[3];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 74;

    //print average
    printf("Average: %i\n", (score1 + score2 + score3)/3);
    printf("Average: %f\n", (score1 + score2 + score3)/3.0);

    int sc[3];
    for (int i=0; i<3; i++)
    {
        sc[i] = get_int("Scores: \n");
    }

    //print using arrays by user input
    printf("Average: %f\n", (sc[0] + sc[1] + sc[2])/3.0);


    //getting input for average using function
    int scs[N];
    for (int i=0; i<N; i++)
    {
        scs[i] = get_int("Scores: \n");
    }

    printf("Average: %f\n", average(N, scs));
}

float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i<N; i++)
    {
        sum += array[i];
    }
    return sum/ (float) length;

}
