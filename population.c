//libraries
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

    int StartLlama;
    do
    {
      StartLlama = get_int("Start llama size: ");
    }
    while (StartLlama < 9);

    // TODO: Prompt for end size

    int EndLlama;
    do
    {
        EndLlama = get_int("End llama size: ");
    }
    while (EndLlama < StartLlama);

    // variables

    int result;
    int years = 0;

    // Code Core

    if (StartLlama == EndLlama)
    {
        years = 0;
        printf("Years: %i\n", years);
    }
    else
    {
    do
    {
      result = (StartLlama/3 - StartLlama/4);
      StartLlama = (StartLlama + result);
      years = (years + 1);
    }
    while (StartLlama < EndLlama);

    // TODO: Print number of years
    {
    printf("Years: %i\n", years);
    }
  }
}