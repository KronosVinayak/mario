#include <stdio.h>
#include <cs50.h>

void printpattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int main (void)
{
    int height=get_int("Enter the Height of the Pyramid: ");
    while (height<1 || height>8)
    {
        height=get_int("Enter a value between 1 & 8: ");
    }
    printpattern(height);
    return 0;
}


