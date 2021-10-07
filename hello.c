//include
#include <stdio.h>
#include <cs50.h>

//main core
int main(void)
{
    string name = get_string("what's your name?\n");
    printf(" Hello, %s\n", name);
}