// This program checks printable characters (with space).

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    char ch;

    for(;;) {
        
        printf("\nType anything: ");

        ch = getch();
        if(ch=='Q') break;
        if(isprint(ch))
        printf("\n%c is a printable character.\n", ch);
       
    }

    return 0;
}