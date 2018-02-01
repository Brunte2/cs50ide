#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    // Reprompts till correct input
    do
    {
        printf("Enter a non-negative integer which is < 24: ");
        height = get_int();
    }
    while(height < 0 || height > 23);

    // Prints double half pyramids
    for (int i = 0; i < height; i++)
    {

        for(int counter1 = i; counter1 < height - 1; counter1++)
        {
            printf(" ");
        }

        for(int counter2 = 0; counter2 < i + 1; counter2++)
        {
            printf("#");
        }

        printf("  ");

        for(int counter3 = 0; counter3 < i + 1; counter3++)
        {
            printf("#");
        }

        printf("\n");
    }
}