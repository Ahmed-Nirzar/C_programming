// This program checks digits.

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
        if(isdigit(ch))
        printf("\n%c is a digit.\n", ch);
       
    }

    return 0;
}