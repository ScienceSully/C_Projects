#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //ask user for card number
    long number = get_long("Number: ");

    //establishes variables
    long product = number;
    int sum = 0;
    int x = 0;
    int valid = false;
    long sec_sum = number;
    int digits = 2;

    //loop to sum the product of every other number and 2
    do {
        int i = (product / 10) % 10;
            i = i * 2;
            //splits any number greater than ten into two digits
            if (i >= 10) {
                x = i % 10;
                    sum = sum + x + (i/10);
            }
            //adds each product to the sum
            else {
               sum = sum + i;
            }
            product = product / 100;
    } while (product > 10);

    //adds the sum to each digit that weren't multiplied
    do {
        int i = sec_sum % 10;
            sum = sum + i;
                sec_sum = sec_sum / 100;
    } while (sec_sum > 1);

    //checks to see if last digit is zero
    if ((sum % 10) == 0) {
        valid = true;
    }

    //checks what type of card it is by removing the first two numbers
    if (valid == true) {
        //printf("Current Card number %li", number);
        do {
            number = number / 10;
            digits++;
            //printf("card number after division %li\n", number);
            //printf("Digits counter: %i\n", digits);
        } while (number > 100);

        if (number == 34 || number == 37){
            if (digits == 15)
                printf("AMEX\n");
        }
        else if (number >= 51 && number <= 55){
            if (digits == 16)
                printf("MASTERCARD\n");
        }
        else if ((number / 10) == 4){
            if (digits == 13 || digits == 16)
                printf("VISA\n");
            else
            //printf("Number of digits %i\n", digits);
                printf("INVALID\n");
        }
        else {
            printf("INVALID\n");
        }

    }
    //if it was not validated in the first step valid remains false and returns invalid
    else {
        printf("INVALID\n");
        //printf("Number of digits %i\n", digits);
    }
}
