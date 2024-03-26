/*Enter value to order number from least to greatest and greatest to least */

#include<stdio.h>

int main()
{
    int i[1000];
    int j,temp,k,val;

    printf("\nEnter amount of value : ");
    scanf("%d",&val);

    for(j=0;j<val;j++){
        printf("\nEnter value no.%d: ",j+1);
        scanf("%d",&i[j]);
    }

    //Order number from least to greatest.

    for(k=0;k<val-1;k++){
        for(j=0;j<val;j++){
            if(i[j]>i[j+1]){
                temp = i[j];
                i[j] = i[j+1];
                i[j+1] = temp;
            }
        }
    }

    printf("\nLeast to Greatest : ");
    

    for(j=0;j<val;j++){
        printf(" %d",i[j]);
    }

    printf("\nGreatest to Least : ");


    for(j=val-1;j>=0;j--){
        printf(" %d",i[j]);
    }

    // Order number from greatest to least.

    /* for(k=0;k<val-1;k++){
        for(j=0;j<val-1;j++){
            if(i[j]<i[j+1]){
                temp = i[j];
                i[j] = i[j+1];
                i[j+1] = temp;
            }
        }
    } */

    printf("\n");

    return 0;
}