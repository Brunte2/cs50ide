#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
float amount_owed;
int n;
int counter;

    while (true)
   {
    printf("How much cash is owed?\n");
    amount_owed = get_float();
    if (amount_owed > 0)
    {
        printf("Amount owed is %f \n", amount_owed);
        break;
    }
   }

n = amount_owed * 100;
counter = 0;

    while(n >= 25)
    {
        counter += 1;
        n = n - 25;
    }
    while(n >= 10)
    {
        counter += 1;
        n = n - 10;
    }
    while(n >= 5)
    {
        counter += 1;
        n = n - 5;
    }
    while(n >= 1)
    {
        counter += 1;
        n = n - 1;
    }

        printf("Bruh you need atleast %d coins\n", counter);

}
