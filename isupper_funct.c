// This program checks uppercase characters.

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
        if(isupper(ch))
        printf("\n%c is a uppercase character.\n", ch);
       
    }

    return 0;
}