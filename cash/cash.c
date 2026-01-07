#include <stdio.h>

int main(void)
{
    int changeowed;

    do
    {
        printf("Change owed: ");
        if (scanf("%d", &changeowed) != 1)
        {
            while (getchar() != '\n');
            changeowed = -1;
        }
        
    }while (changeowed < 0);

    int change = 0;
    while (changeowed != 0)
    {
        if (changeowed >= 25)
        {
            changeowed -= 25;
            change++;
        }
        else if (changeowed >= 10)
        {
            changeowed -= 10;
            change++;
        }
        else if (changeowed >= 5)
        {
            changeowed -= 5;
            change++;
        }
        else
        {
            changeowed -= 1;
            change++;
        }
    }


    // output for the number of coins to give the customer
    printf("coins: %i\n", change);
}
