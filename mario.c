// Libreries
#include <stdio.h>
#include <cs50.h>
// Positive Number Height
int main(void)
{
    int Height;
    do
    {
        Height = get_int("Width: ");
    }
    while (Height < 1 || Height > 8);
// Vals
    int Columns = Height - 1;
    int hash = 1;
    int space = 2;
// Main Core {
// Spaces
    for (int i = 0; i < Height; i++)
    {
        for (int j = 0; j < Columns; j++)
        {
            printf(" ");
        }
// Print hash
        for (int k = 0; k < hash; k++)
        {
            printf("#");
        }
// Spaces#2
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
// Print hash#2
        for (int k = 0; k < hash; k++)
        {
            printf("#");
        }
// Main Core }
// Val calculators
        hash = (hash + 1);
        Columns = (Columns - 1);
// Next line
        printf("\n");
    }
}