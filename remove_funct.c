/* This program demonstrates remove(). It prompts the user for the file to erase and also provides a safety check in case the user 
entered the wrong name. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char fname[80];

    printf("Enter name of file to erase: ");
    gets(fname);
    printf("Are you sure? (Y/N) ");
    if(toupper(getchar()) == 'Y') remove(fname);

    return 0;
}