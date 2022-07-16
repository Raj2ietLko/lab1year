//1 Write a program to delete duplicate element in a list of 10 elements &
//  display it on screen.

#include <stdio.h>

int main(){
    int n=0,A[10];
    for(int i=0;i<10;i++){
        int t;
        scanf("%d",&t);
        int flag=0;
        for(int j=0;j<n;j++){
            if(A[j]==t){
                flag=1;
                break;
            }
        }
        if(flag)continue;
        else A[n]=t,n++;
    }

    for(int i=0;i<n;i++)printf("%d ",A[i]);

}