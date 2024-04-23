// This program counts time it takes to complete this loop.

#include <time.h>
#include <stdio.h>

int main(void)
{
    time_t start, end;
    long unsigned int t;

    start = time(NULL);
    for(t=0; t<500000000; t++);
    end = time(NULL);
    printf("Loop required %f seconds.\n", difftime(end, start));

    return 0;
}