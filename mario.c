//Libraries | will need access to run
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Integers
    int h, r, c, s;
    //Loops & Conditionals, etc.
    do
    {
    h = get_int("Enter Height: ");
    }
    while (h < 1 || h > 8);

    for (r = 0; r < h; r++)
    {
        for (s = 0; s < h - r - 1; s++)
        {
            printf(" ");
        }
        for (c = 0; c <= r; c++)
        {
            printf("#");
        }
        printf("\n");
    }
}
