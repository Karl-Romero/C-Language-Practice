#include <cs50.c>
#include <stdio.h>


int main(void)
{
    // string has a bug when getting_string so you need to add an extra ("") for it to run
    string name = get_string("","What's your name bitch?");
    printf("Hello, %s", name);
}