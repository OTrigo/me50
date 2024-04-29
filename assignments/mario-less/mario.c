#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, row, wspace, column;

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (row = 0; row < height; row++)
    {
        for (wspace = 0; wspace < height - row - 1; wspace++)
        {
            printf(" ");
        }
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}
