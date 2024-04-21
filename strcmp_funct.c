// This program can use as password checking.

#include <string.h>
#include <stdio.h>

int main(void)
{
    char s[80];

    printf("Enter password: ");
    gets(s);

    if(strcmp(s, "pass")) {
        printf("Invalid Password\n");
        return 0;
    }
    return 1;
}