#include <stdio.h>

int BinDec(int N){
    if(!N)return 0;
    return (N%10)+BinDec(N/10);
}



int main(){
    int N;
    scanf("%d",&N);
    printf("%d",BinDec(N));
}
    
