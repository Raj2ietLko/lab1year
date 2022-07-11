#include <stdio.h>

void genFab(int N){
  int n=1,n_1=1;
  for(int i=0;i<n;i++)printf("%d ",n_1),n+=n_1,n_1=n-n_1;
  printf("\n");
}

int sUmOfFab(){
    int N;
    scanf("%d",&N);
    int sUm=0;
    int n=1,n_1=1;
    
    for(int i=0;i<N;i++){
        sUm+=n_1;
        n+=n_1;
        n_1=n-n_1;
    }
    return sUm;
}

int main(){
    //genFab(12);
    printf("%d",sUmOfFab());
    //i observed that sum of n term is -1 to n+2th term
}

