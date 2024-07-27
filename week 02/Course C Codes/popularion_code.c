#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Promting the user for a starting # of llamas
    int start;
    do
    {
        start = get_int("start size: ");
    }
    while (start < 9);
    // Promting them for an ending # of llamas
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);
    // How many years will it take to get to the goal?
    int years = 0;
    while (start < end)
    {
        start += start / 12;
        years++;
    }

    printf("Years: %i\n", years);
}

