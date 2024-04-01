// Identifing prime numbers
#include <stdio.h>

int main()
{
    int num,i,prime;

    printf("Enter the number : ");
    scanf("%d",&num);

    prime = 1;

    for(i=2;i<=num/2;i++)
    {
        if((num%i) == 0) prime = 0;
    
    }
    if(prime == 1) printf("This is a prime number.");
    else printf("Not a prime number.");

    

    return 0;
}