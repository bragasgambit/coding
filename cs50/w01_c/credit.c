// program in C that checks the validity of a given credit card number
// #include <cs50.h> switch this library in code
#include <math.h>
#include <stdio.h>

// AMEX start with 34 or 37, 15 digits
// MASTER start with 51, 52, 53, 54, 55, 16 digits
// VISA start with 4, 13 and 16 digits

// Luhn's Algorithm:
// 1. Multiply every other digit by 2, starting with the number's second-to-last digit
// and then add those products' digits together
// 2. Add the sum to the sum of the digits that weren't multiplied by 2
// 3. If the total's last digit is 0, the number is valid.

int main(void)
{
    long long creditn, n;

    creditn = get_long("Number: ");

    n = creditn;

    // Number of digits. d add to sum, d2 (second digit) * 2 add to the sum of digits
    int counter = (n == 0) ? 1 : (log10(n) + 1);
    int sum = 0;

    while (n != 0)
    {
        int d = n % 10;
        sum += d;

        int d2 = 2 * ((n / 10) % 10);

        int r = (d2 % 10) + floor((d2 / 10) % 10); // Floor to smaller integer
        sum += r;
        n /= 100;
    }

    string card; // Card number check

    int test = creditn / pow(10, counter - 2);
    if (counter == 15 && (test == 34 || test == 37))
    {
        card = "AMEX";
    }

    else if (counter == 16 && test >= 51 && test <= 55)
    {
        card = "MASTERCARD";
    }

    else if ((counter == 13 || counter == 16) && test / 10 == 4)
    {
        card = "VISA";
    }

    else
    {
        card = "INVALID";
    }

    // Check the sum's modulo by 10
    if (sum % 10 == 0)
    {
        printf("%s\n", card);
    }
    else
    {
        printf("INVALID\n");
    }
}
