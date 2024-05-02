/* A program that allows access only if the user enters the correct password as a command-line parameter. If the user enters 
the right word, print Access Permitted, otherwise print Access Denied. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc!=2) {
        printf("Specify a password");
        exit(1);
    }
    if(!strcmp(argv[1], "password"))
    printf("Access Permitted");
    else printf("Access Denies");

    return 0;
}