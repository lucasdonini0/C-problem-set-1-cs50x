#include <stdio.h>
#include <stdbool.h>

long long input;

int main(void)
{


    // 4 0 0 3 6 0 0 0 0 0 0 0 0 0 1 4
    // 4003600000000014
    
    do
    {
        printf("Card number: ");
        if (scanf("%lld", &input) != 1)
        {
            while (getchar() != '\n');
            input = -1;
        }
    } while (input < 0);


    // checksum
    int is_second = 0;
    int sum = 0;
    long long temp_input = input;
    while (temp_input != 0)
    {
        int digit = temp_input % 10; 

        if (is_second == 1)
        {
            digit = digit * 2;
        }
        if (digit > 9)
        {
            digit = digit / 10 + digit % 10;
        }

        sum += digit;
        is_second = !is_second;
        temp_input = temp_input / 10;
    }


    if (sum % 10 == 0)
    {
        // check card type(?)
        long long card_number = input;
        int length = 0;
        while (card_number != 0)
        {
            card_number = card_number / 10;
            length++;
        }
        if (length == 15 && (input / 10000000000000 == 34 || input / 10000000000000 == 37))
            {
                printf("Valid - AMEX\n");
            }
        else if (length == 16 && (input / 100000000000000 == 51 || input / 100000000000000 == 52 || input / 100000000000000 == 53 || input / 100000000000000 == 54 || input / 100000000000000 == 55))
            {
                printf("Valid - MASTERCARD\n");
            }
        else if (length == 13 || length == 16 && (input / 1000000000000 == 4 || input / 1000000000000000 == 4))
            {
                printf("Valid - VISA\n");
            }   
        else
            {
                printf("Valid - Unknown Card Type\n");
            }
    }
    else
    {
        printf("Invalid\n");
    }

}