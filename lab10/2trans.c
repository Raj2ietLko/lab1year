//2 Using Dynamic Memory Allocation, Write a program to find the transpose
//  of given matrix.

#include <stdio.h>
#include <stdlib.h>
int main(){
    int* M;
    int n;scanf("%d",&n);
    M=(int *)malloc(n*n*sizeof(int));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",(M+i*n)+j);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%d ",*((M+j*n)+i));printf("\n");
    }
}