#include <stdio.h>
#include <cs50.c>

int main(void)
{
    int x = get_int("What is your first number?");
    int y = get_int("What is your second number?");
    printf("%i\n", x + y);
}