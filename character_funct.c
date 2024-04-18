// This program checks all types of characters in different way.

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    char ch;

    printf("Press space bar to exit.");

    // isalnum() checks alphanumeric characters.
    
    printf("\nThis program checks alphanumeric characters.");

    for(;;) {
        
        printf("\nType anything: ");

        ch = getch();
        if(ch==' ') break;
        if(isalnum(ch))
        printf("\n%c is a alphanumeric character.\n", ch);
       
    }

    // isalpha() checks alphabets.
    
    printf("\nThis program checks alphabets.");

    for(;;) {
        
        printf("\nType anything: ");

        ch = getch();
        if(ch==' ') break;
        if(isalpha(ch))
        printf("\n%c is a alphabet.\n", ch);
       
    }

    // iscntrl() checks control characters.
    
    printf("\nThis program checks control characters.");

    for(;;) {
        
        printf("\nType anything: ");

        ch = getch();
        if(ch==' ') break;
        if(iscntrl(ch))
        printf("\n%c is a control character.\n", ch);
       
    }

    // isdigit() checks digits.
    
    printf("\nThis program checks digits.");

    for(;;) {
        
        printf("\nType anything: ");

        ch = getch();
        if(ch==' ') break;
        if(isdigit(ch))
        printf("\n%c is a digit.\n", ch);
       
    }

    // isgraph() checks all printing characters (without space).
    
    printf("\nThis program checks all printing characters without space.");

    for(;;) {
        
        printf("\nType anything: ");

        ch = getch();
        if(ch==' ') break;
        if(isgraph(ch))
        printf("\n%c is a printable character.\n", ch);
       
    }

    // islower() checks lowercase letters.
    
    printf("\nThis program checks lowercase letters.");

    for(;;) {
        
        printf("\nType anything: ");

        ch = getch();
        if(ch==' ') break;
        if(islower(ch))
        printf("\n%c is a lowercase letter.\n", ch);
       
    }

    // isupper() checks alphabets.
    
    printf("\nThis program checks uppercase letters.");

    for(;;) {
        
        printf("\nType anything: ");

        ch = getch();
        if(ch==' ') break;
        if(isupper(ch))
        printf("\n%c is a uppercase letter.\n", ch);
       
    }

    // ispunct() checks punctuation.
    
    printf("\nThis program checks punctuation.");

    for(;;) {
        
        printf("\nType anything: ");

        ch = getch();
        if(ch==' ') break;
        if(ispunct(ch))
        printf("\n%c is a punctuation.\n", ch);
       
    }

    // isxdigit() checks hexadecimal digits.
    
    printf("\nThis program checks hexadecimal digits.");

    for(;;) {
        
        printf("\nType anything: ");

        ch = getch();
        if(ch==' ') break;
        if(isxdigit(ch))
        printf("\n%c is a hexadecimal digit.\n", ch);
       
    }

    printf("Press Q to exit.");

    // isprint() checks printable characters.
    
    printf("\nThis program checks printable characters.");

    for(;;) {
        
        printf("\nType anything: ");

        ch = getch();
        if(ch=='Q') break;
        if(isalpha(ch))
        printf("\n%c is a printable character.\n", ch);
       
    }

    // isspace() checks whitespace characters.
    
    printf("\nThis program checks whitespace characters.");

    for(;;) {
        
        printf("\nType anything: ");

        ch = getch();
        if(ch=='Q') break;
        if(isalpha(ch))
        printf("\n%c is a whitespace character.\n", ch);
       
    }


    return 0;
}