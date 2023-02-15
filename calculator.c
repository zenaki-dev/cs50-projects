// Loading libraries | will need to run
#include <cs50.h>
#include <stdio.h>

// Inserting integer
int main(void)
{
    // Prompt user for x
    long x = get_int("x: ");

    // Promp user for y
    long y = get_int("y: ");

    // Perform addition
    printf("%li\n", x + y);  
}
