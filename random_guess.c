#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,j,k;

    i = rand();

    for(j=0;j<10;j++) {
        printf("Enter your guess : ");
        scanf("%d",&k);
        if(k == i){
            printf("You win!\n");
            exit(1);
        }

        if(k < i) {
            printf("Too small!\n");
        }

        if(k > i) {
            printf("Too big!\n");
        }
    }

    return 0;
}