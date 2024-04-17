// This program checks hexadecimal characters.

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
        if(isxdigit(ch))
        printf("\n%c is hexadecimal character.\n", ch);
       
    }

    return 0;

}