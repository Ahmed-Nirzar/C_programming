// Displays number of system clock cycles occuring after it started.

#include <stdio.h>
#include <time.h>

int main()
{
    int i;

    for(i=0; i<100000; i++);
    printf("%u\n",clock());

    return 0;
}