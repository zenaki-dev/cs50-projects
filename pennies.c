//Libraries | will need to run
#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float amount = get_float("Dollar Amount: ");
    int pennies = round(amount * 100);
    printf("Pennies: %i\n", pennies);
}
