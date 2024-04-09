// This program checks printable characters.

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    char ch;

    for(;;) {
        
        printf("\nType anything: ");

        ch = getch();
        if(ch==' ') break;
        if(isgraph(ch))
        printf("\n%c is a printable character.\n", ch);
       
    }

    return 0;
}