#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("do you agree? \n");

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed! \n");
    }

    else (c == 'n' || c == 'N')
    {
        printf("Not agreed! \n");
    }
}
