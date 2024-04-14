// This program checks whitespace characters.

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
        if(isspace(ch))
        printf("\n%c is a whitespace.\n", ch);
       
    }

    return 0;
}