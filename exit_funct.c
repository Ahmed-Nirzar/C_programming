// This program is used to immediate normal termination.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
    char ch;
    for(;;) {
        printf("Press 'q' to quit this loop.\n\n");
        ch = getch();
        if(ch== 'q') exit(0);
    }

    return 0;
}