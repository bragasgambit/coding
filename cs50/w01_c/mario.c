// challenging problem
// https://cs50.harvard.edu/x/2024/psets/1/mario/more/
// must change the get_int to a real function to validate the input #include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    // checking if the user input a valid number

    do // do something while (n < 1) is true
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8); // n must be in the 1 and 8 interval

    // lines == height
    for (int i = 0; i < n; i++) //"for i in range(0,n)" -- py
    {
        // blank spaces considering that j decreases for the first pyramid -- every time starts with
        // n - 1 (eg n = 3, j = 2 (two spaces))

        for (int j = n - 1; j > i; j--)
        {
            printf(" ");
        }

        // bricks
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        // two spaces between pyramids
        printf("  ");

        // second pyramid -- same as k without the blank spaces
        for (int l = 0; l < i + 1; l++)
        {
            printf("#");
        }

        printf("\n");
    }
}
