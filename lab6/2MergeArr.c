//2 Write a program to merge two sorted array & no element is repeated during merging.

#include <stdio.h>

int main(){    //I have assumed that the order is increasing
    int a,b;
    printf("enter length of first array :\n");
    scanf("%d",&a);
    printf("enter elements of first array :\n");
    int A[a];
    for(int i=0;i<a;i++)scanf("%d",A+i);

    printf("enter length of second array :\n");
    scanf("%d",&b);
    printf("enter elements of second array :\n");
    int B[b];
    for(int i=0;i<b;i++)scanf("%d",B+i);
    
    int C[a+b];
    int k=0;
    for(int i=0,j=0;i<a || j<b;){
        int t;
        if( (A[i]<B[j] && i!=a) || j==b ) t=A[i],i<a?i++:0;
        else t=B[j],j<b?j++:0;
        
        int flag=1;
        if(C[k-1]==t)flag=0;
        if(flag) C[k]=t,k++;
    }
    for(int i=0;i<k;i++)printf("%d ",C[i]);
}
