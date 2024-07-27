#include <stdio.h>

// Function to set the text color using ANSI escape codes
void setColor(char color)
{
    switch (color)
    {
        case 'r': // Red
            printf("\033[0;31m");
            break;
        case 'g': // Green
            printf("\033[0;32m");
            break;
        case 'y': // Yellow
            printf("\033[0;33m");
            break;
        case 'b': // Blue
            printf("\033[0;34m");
            break;
        case 'm': // Magenta
            printf("\033[0;35m");
            break;
        case 'c': // Cyan
            printf("\033[0;36m");
            break;
        case 'w': // White
            printf("\033[0;37m");
            break;
        default: // Default color (white)
            printf("\033[0m");
            break;
    }
}

// Function to reset the text color to default
void resetColor()
{
    printf("\033[0m");
}

// Function to draw the pyramid
void drawPyramid(int height)
{
    for (int i = 1; i <= height; i++)
    {
        // Print spaces
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }
        // Print asterisks
        for (int k = 0; k < (2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int height;
    char color;

    // Prompt the user for the pyramid height
    do
    {
        printf("Enter the height of the pyramid (1 to 8): ");
        scanf("%d", &height);
        if (height < 1 || height > 8)
        {
            printf("Invalid value! Please enter a number between 1 and 8.\n");
        }
    }
    while (height < 1 || height > 8);

    // Prompt the user for the pyramid color
    printf("Choose the color of the pyramid (r=red, g=green, y=yellow, b=blue, m=magenta, c=cyan, "
           "w=white): ");
    scanf(" %c", &color); // Note the space before %c to correctly capture the input

    // Set the chosen color
    setColor(color);

    // Draw the pyramid
    drawPyramid(height);

    // Reset the color to default
    resetColor();

    return 0;
}

