// This program checks punctuations.

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
        if(ispunct(ch))
        printf("\n%c is a punctuation.\n", ch);
       
    }

    return 0;
}