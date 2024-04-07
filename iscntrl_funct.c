// This program checks control characters.

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
        if(iscntrl(ch))
        printf("\n%c is a control character\n", ch);
       
    }

    return 0;
}