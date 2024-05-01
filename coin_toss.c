// Simple coin-toss program.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
    printf("\nPress 'Enter'.\n");
    for(;;){
        rand();
        if(kbhit()) break;
    }

    rand()%2 ? printf("Head") : printf("Tail");

    return 0;
}