#include <stdio.h>



int DecBin(int N){
    if(!N)return 0;
    return (N%10)+DecBin(N/10);
}



int main(){
    int N;
    scanf("%d",&N);
    printf("%d",DecBin(N));
}
    
