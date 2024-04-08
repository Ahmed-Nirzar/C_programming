// This program checks alphabets.

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
        if(isalpha(ch))
        printf("\n%c is a letter\n", ch);
       
    }

    return 0;
}