// This program checks alphanumeric.

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
        if(isalnum(ch))
        printf("\n%c is alphanumeric.\n", ch);
       
    }

    return 0;

}