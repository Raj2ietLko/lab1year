//1 Write a program to find the largest no among 20 integers array using dynamic memory allocation.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p,max;
    p=(int *)malloc(20*sizeof(int));
    scanf("%d",p);
    max=*p;
    for(int i=1;i<20;i++){
        scanf("%d",p+i);
        if(max<*(p+i))max=*(p+i);
    }
    printf("%d",max);
}