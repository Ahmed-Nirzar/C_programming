// This program checks lowercase letters.

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
        if(islower(ch))
        printf("\n%c is a lowercase letter.\n", ch);
       
    }

    return 0;
}