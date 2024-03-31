/* Write a program that reads a test file and counts how many times each letter from 'A' to 'Z' occurs. Have it display the 
results. (Do not differentiate between upper and lowercase letters.) */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int count[26];

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
    int i;

    // see if file name is specified
    if(argc!=2) {
        printf("File name missing.\n");
        exit(1);
    }

    if((fp = fopen(argv[1], "r")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    while((ch = fgetc(fp)) != EOF) {
        ch = toupper(ch);
        if(ch>='A' && ch<='Z') count[ch-'A']++;
    }

    for(i=0; i<26; i++)
    printf("%c occured %d times\n", i+'A', count[i]);

    fclose(fp);

    return 0;
}