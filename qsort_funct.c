// This program can sort a list of integers and displays the results.

#include <stdio.h>
#include <stdlib.h>

int comp(const void *i, const void *j);
int num[10];

int main(void)
{
    int i;

    for(i=0; i<10; i++) {
        printf("Input value number %d: ",i+1);
        scanf("%d",&num[i]);
    }

    printf("Original array: ");
    for(i=0; i<10; i++) printf("%d ",num[i]);
    printf("\n");

    qsort(num,10,sizeof(int),comp);

    printf("Sorted array: ");
    for(i=0;i<10;i++) printf("%d ",num[i]);

    return 0;
}

// compare the integers
int comp(const void *i, const void *j)
{
    return *(int *)i - *(int *)j;
}