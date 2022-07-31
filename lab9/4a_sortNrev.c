//Write the following C program using pointer:
//    a) To sort the list of numbers through pointer
//    b) To reverse the string through pointer.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *List,n,t;
    printf("enter count of number :");
    scanf("%d",&n);
    List=(int *)malloc(n*sizeof(int));
    printf("enter numbers :");
    for(int i=0;i<n;i++)scanf("%d",&List[i]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(List[j]>List[j+1]){
                t=List[j],List[j]=List[j+1],List[j+1]=t;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",List[i]);
    }
}