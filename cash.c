//Load in Libraries | will need access to run
#include <cs50.h>
#include <stdio.h>
#include <math.h>
//Declare calculations
int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);
//When Green Flag Clicked
int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}
//Clarifying Cents
int get_cents(void)
{
    int cents;
    do
    {
        cents = get_int("Cents Owed: ");
    }
    while (cents < 0);
    return cents;
}
//Establishing Quarters
int calculate_quarters(int cents)
{
    return cents / 25;
}
//Establishing Dimes
int calculate_dimes(int cents)
{
    return cents / 10;
}
//Establishing Nickels
int calculate_nickels(int cents)
{
    return cents / 5;
}
//Establishing Pennies
int calculate_pennies(int cents)
{
    return cents / 1;
}
