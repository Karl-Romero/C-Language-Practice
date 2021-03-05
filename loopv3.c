#include <stdio.h>

void meow(int R);

int main(void)
{
    meow(3);
}

void meow(int R)
{
    for(int K = 0; K < R; K++)
    {
        printf("Roxy is Best Waifu\n");
    }
}