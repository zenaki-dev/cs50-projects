// Libraries | will need to run
#include <cs50.h>
#include <stdio.h>

//Integers
int main(void)
{

    const int mine = 2;
    int points = get_int("How many points did you lose? ");

    if (points < mine)
    {
        printf("You lose fewer points than me.\n");
    }
    else if (points > mine)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You lost the same number of points as me.\n");
    }
}
