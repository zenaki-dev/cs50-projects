//Libraries | will need to run
#include <cs50.h>
#include <stdio.h>
//Integers
int main(void)
{
    int n = get_int("n: ");

    // If n is even
        if (n % 2 == 0)
        {
        printf("even\n");
        }

    //Else
    else
    {
        printf("odd\n");
    }
}
