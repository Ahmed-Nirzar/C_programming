// This program shows the length of the sentence.

#include <stdio.h>
#include <string.h>

int main(void)
{
    char ch[100];
    printf("Enter a sentence : ");
    gets(ch);
    printf("Length of this sentence is : %d .", strlen(ch));

    return 0;
}