#include <cs50.c>
#include <stdio.h>


int main(void)
{
    string name = get_string("","What's your name bitch?");
    printf("Hello, %s", name);
}