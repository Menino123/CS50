#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get size of grid
    int n;
    do
    {
        n = get_int("Size: ");  // ask the question
    }
    while (n < 1);

    // creat and print the grid
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" #");
        }
        printf("\n");
    }
}
