// This program displays random numbers.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    for(i=0; i<10; i++) printf("%5.5d\n",rand());

    return 0;
}