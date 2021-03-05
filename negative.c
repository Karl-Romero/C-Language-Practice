#include <cs50.c>
#include <stdio.h>


int get_negative_int(void);

int main(void)
{
    int i = get_negative_int();
    
    printf("%i\n", i);
}

int get_negative_int(void)
{
    int x;
    do
    {
        x = get_int("Give me Negative Integer Only please: ");
    }
    while (x > -1);
    return x;
}