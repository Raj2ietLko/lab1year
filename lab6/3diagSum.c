#include <stdio.h>

int main(){
    int a,b;
    printf("enter dimension of square matrix :\n");
    scanf("%d",&a);
    int A[a][a];
    printf("enter entries of first matrix :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            scanf("%d",&A[i][j]);
        }
    }

    int B[a][a];
    printf("enter entries of first matrix :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            scanf("%d",&B[i][j]);
        }
    }

    int C[a];
    for(int i=0;i<a;i++){
        C[i]=A[i][i]+B[i][i];
    }
    for(int i=0;i<a;i++)printf("%d ",C[i]);
}