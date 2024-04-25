// This program shows how to convert char to float by using atof() function. 

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char num1[80], num2[80];

    printf("Enter first: ");
    gets(num1);
    printf("Enter second: ");
    gets(num2);
    printf("The sum is: %f", atof(num1) + atof(num2));

    return 0;
}