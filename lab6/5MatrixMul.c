#include <stdio.h>

int widthOfNum(int a){
    if(!a)return 1;
    int l=0;
    for(;a!=0;l++)a=a/10;
    return l;
}

int main(){
    int a;
    printf("enter dimension of square matrix :\n");
    scanf("%d",&a);
    int width=0;
    int A[a][a];
    printf("enter entries of first matrix :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            scanf("%d",&A[i][j]);
        }
    }

    int B[a][a];
    printf("enter entries of second matrix :\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            scanf("%d",&B[i][j]);
            
        }
    }
    //Multipying
    int C[a][a];
    for(int i=0;i<a;i++){           //chossing i'th row of A
        for(int j=0;j<a;j++){       //chossing j'th colmn for each i
            C[i][j]=0;
            for(int k=0;k<a;k++){   //summing the product
                C[i][j]+=A[i][k]*B[k][j];
                int t=widthOfNum(C[i][j]);
                width=width<t?t:width;
            }
        }
    }

    printf("\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            printf("%*d ",width,C[i][j]);
        }
        printf("\n");
    }

}