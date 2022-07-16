#include <stdio.h>

int widthOfNum(int a){
    if(!a)return 1;
    int l=0;
    for(;a!=0;l++)a=a/10;
    return l;
}

int main(){
    int a,b;
    printf("enter dimension of square matrix :\n");
    scanf("%d",&a);
    int A[a][a];
    printf("enter entries of first matrix :\n");
    int width=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            scanf("%d",&A[i][j]);
            int t=widthOfNum(A[i][j]);
            width=width<t?t:width;
        }
    }
    printf("\n");
    int B[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            B[i][j]=A[j][i];
            printf("%*d ",width,B[i][j]);
        }
        printf("\n");
    }

}